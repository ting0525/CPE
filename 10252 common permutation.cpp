#include<stdio.h>

int main(){
	
	char s[1001];
	while(gets(s)){
		int test1[128]={};
		int test2[128]={};
		int i;
		for(i=0;s[i];i++){
			test1[s[i]]++;
		} 
		gets(s);
		for(i=0;s[i];i++){
			test2[s[i]]++;	
		}
		for(i=0;i<128;i++){
			for(int j=0;j<test1[i]&&j<test2[i];j++){
				if(i!=' ')
					printf("%c" , i);
			}
				
		}
		puts(" ");
	}
	return 0;
}
