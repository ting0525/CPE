//server
#include <errno.h>

#include <malloc.h>
#include <string.h>

#include <sys/types.h>


#include "openssl/ssl.h"
#include "openssl/err.h"
#include <WS2tcpip.h>
#include <string>

#pragma comment (lib, "ws2_32.lib")
#define FAIL    -1

int OpenListener(int port)
{
    int sd;
    struct sockaddr_in addr;
    WSAData data;
    WORD ver = MAKEWORD(2, 2);
    int wsResult = WSAStartup(ver, &data);
    if (wsResult != 0)
    {
        printf("winsock error");
        return 0;
    }

    sd = socket(PF_INET, SOCK_STREAM, 0);
    ZeroMemory(&addr, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = INADDR_ANY;
    if (bind(sd, (struct sockaddr*)&addr, sizeof(addr)) != 0)
    {
        perror("can't bind port");
        abort();
    }
    if (listen(sd, 10) != 0)
    {
        perror("Can't configure listening port");
        abort();
    }
    listen(sd, SOMAXCONN);
    return sd;
}

SSL_CTX* InitServerCTX(void)
{
    const SSL_METHOD* method = TLS_client_method(); /* Create new client-method instance */
    SSL_CTX* ctx;

    OpenSSL_add_all_algorithms();  /* load & register all cryptos, etc. */
    SSL_load_error_strings();   /* load all error messages */
    
    ctx = SSL_CTX_new(method);   /* create new context from method */
    if (ctx == NULL)
    {
        ERR_print_errors_fp(stderr);
        abort();
    }
    return ctx;
}

void LoadCertificates(SSL_CTX* ctx, char* CertFile, char* KeyFile)
{
    //New lines 
    if (SSL_CTX_load_verify_locations(ctx, CertFile, KeyFile) != 1)
        ERR_print_errors_fp(stderr);

    if (SSL_CTX_set_default_verify_paths(ctx) != 1)
        ERR_print_errors_fp(stderr);
    //End new lines

    /* set the local certificate from CertFile */
    if (SSL_CTX_use_certificate_file(ctx, CertFile, SSL_FILETYPE_PEM) <= 0)
    {
        ERR_print_errors_fp(stderr);
        abort();
    }
    /* set the private key from KeyFile (may be the same as CertFile) */
    if (SSL_CTX_use_PrivateKey_file(ctx, KeyFile, SSL_FILETYPE_PEM) <= 0)
    {
        ERR_print_errors_fp(stderr);
        abort();
    }
    /* verify private key */
    if (!SSL_CTX_check_private_key(ctx))
    {
        fprintf(stderr, "Private key does not match the public certificate\n");
        abort();
    }

    //New lines - Force the client-side have a certificate
    SSL_CTX_set_verify(ctx, SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT, NULL);
    SSL_CTX_set_verify_depth(ctx, 4);
    //End new lines
}

void ShowCerts(SSL* ssl)
{
    X509* cert;
    char* line;

    cert = SSL_get_peer_certificate(ssl); /* Get certificates (if available) */
    if (cert != NULL)
    {
        printf("Server certificates:\n");
        line = X509_NAME_oneline(X509_get_subject_name(cert), 0, 0);
        printf("Subject: %s\n", line);
        free(line);
        line = X509_NAME_oneline(X509_get_issuer_name(cert), 0, 0);
        printf("Issuer: %s\n", line);
        free(line);
        X509_free(cert);
    }
    else
        printf("No certificates.\n");
}

void Servlet(SSL* ssl) /* Serve the connection -- threadable */
{
    char buf[1024];
    char reply[1024];
    int sd, bytes;
    const char* HTMLecho = "<html><body><pre>%s</pre></body></html>\n\n";

    if (SSL_accept(ssl) == FAIL)     /* do SSL-protocol accept */
        ERR_print_errors_fp(stderr);
    else
    {
        ShowCerts(ssl);        /* get any certificates */
        bytes = SSL_read(ssl, buf, sizeof(buf)); /* get request */
        if (bytes > 0)
        {
            buf[bytes] = 0;
            printf("Client msg: \"%s\"\n", buf);
           // sprintf(reply, HTMLecho, buf);   /* construct reply */
            SSL_write(ssl, reply, strlen(reply)); /* send reply */
        }
        else
            ERR_print_errors_fp(stderr);
    }
    sd = SSL_get_fd(ssl);       /* get socket connection */
    SSL_free(ssl);         /* release SSL state */
    closesocket(sd);          /* close connection */
}

int main()
{
    SSL_CTX* ctx;
    int server;
    char portnum[] = "54000";

    char CertFile[] = "C:/Users/cert/Documents/testing/ec_crt.pem";
    char KeyFile[] = "C:/Users/cert/Documents/testing/private-key.pem";

    SSL_library_init();

    ctx = InitServerCTX();        /* initialize SSL */
    LoadCertificates(ctx, CertFile, KeyFile); /* load certs */
    printf("Certificate loaded");
    server = OpenListener(atoi(portnum));    /* create server socket */
    while (1)
    {
        struct sockaddr_in addr;
        socklen_t len = sizeof(addr);
        SSL* ssl;

        int client = accept(server, (struct sockaddr*)&addr, &len);  /* accept connection as usual */
        //printf("Connection: %s:%d\n", inet_ntop(addr.sin_addr), ntohs(addr.sin_port));
        printf("Connected");
        ssl = SSL_new(ctx);              /* get new SSL state with context */
        SSL_set_fd(ssl, client);      /* set connection socket to SSL state */
        Servlet(ssl);         /* service connection */
    }
    closesocket(server);          /* close server socket */
    SSL_CTX_free(ctx);         /* release context */
}
