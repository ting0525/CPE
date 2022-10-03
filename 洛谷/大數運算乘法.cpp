#include<iostream>//2934 3489 10236726 
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
char a1[10001],b1[10001];
int a[10001],b[10001],i,x,len,j,c[10001];
int main (){
    cin>>a1>>b1;
    int lena=strlen(a1);  //取出字串長度 
	int lenb=strlen(b1);  //取出字串長度 
    for(i=0;i<lena;i++)  //轉換成integer 並倒著存入陣列 
		a[i]=a1[lena-1-i]-'0';
    for(i=0;i<lenb;i++)  //轉換成integer 並倒著存入陣列 
		b[i]=b1[lenb-1-i]-'0';
	for(i=0;i<lenb;i++)  //做相乘 
		for(j=0;j<lena;j++)
			c[i+j]+=a[j]*b[i];
    for(i=0;i<lena+lenb;i++) //進位 
		if(c[i]>9){
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	len=lena+lenb;  //兩個字串總長 
    while(c[len]==0&&len>=0)  //去除掉首項為0的輸出 
		len--;
    for(i=len;i>=0;i--) //輸出 
		cout<<c[i];
    return 0;
}
