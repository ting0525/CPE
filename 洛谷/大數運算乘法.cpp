#include<iostream>//2934 3489 10236726 
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
char a1[10001],b1[10001];
int a[10001],b[10001],i,x,len,j,c[10001];
int main (){
    cin>>a1>>b1;
    int lena=strlen(a1);  //���X�r����� 
	int lenb=strlen(b1);  //���X�r����� 
    for(i=0;i<lena;i++)  //�ഫ��integer �í˵ۦs�J�}�C 
		a[i]=a1[lena-1-i]-'0';
    for(i=0;i<lenb;i++)  //�ഫ��integer �í˵ۦs�J�}�C 
		b[i]=b1[lenb-1-i]-'0';
	for(i=0;i<lenb;i++)  //���ۭ� 
		for(j=0;j<lena;j++)
			c[i+j]+=a[j]*b[i];
    for(i=0;i<lena+lenb;i++) //�i�� 
		if(c[i]>9){
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	len=lena+lenb;  //��Ӧr���`�� 
    while(c[len]==0&&len>=0)  //�h����������0����X 
		len--;
    for(i=len;i>=0;i--) //��X 
		cout<<c[i];
    return 0;
}
