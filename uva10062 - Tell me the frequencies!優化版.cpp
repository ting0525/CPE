#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[1001];
	int length;
	while(cin.getline(s,1001)){
		int a[256]={0};
		length=strlen(s);
		for(int i=0;i<length;i++) 
			a[s[i]]++;
		for(int i=1;i<=length;i++){
			for(int j=255;j>=0;j--)
				if(a[j]==i) 
					printf("%d %d\n",j,i);
		}
		printf("\n");
		}
}

