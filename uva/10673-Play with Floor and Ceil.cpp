#include <cstdio>
#include <cstring>

int main () {

    int T, X, K;
    scanf ("%d", &T);
    while (T--)  {

        scanf ("%d%d", &X, &K);
        if (X < K) {                 //�Ĥ@�� 
            printf ("%d %d\n", 0, X);//�L����˥h == 0   �L����i�� == x  �]��x=x* x/k    x/k==0 floor(0)==1 
            continue;
        }

        if (X % K == 0)   // x=q*x/k =>q==k 
            printf ("0 %d\n", K);
        else {                    //x=p*n+q*(n+1)   n==x/k  n+1==x/k+1
            int q = X % (X / K);
            int p = X / (X / K) - q;
            printf ("%d %d\n", p, q);
        }
    }
    return 0;
}
