#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,count=0;
	char s[1000]={0};
	int a[26]={0};
	scanf("%d\n" , &n);
	for(int x=0;x<n;x++){
		gets(s);
		for(int i=0;i<strlen(s);i++){      //³o¸Ì¤£¼ô 
			if(s[i]>='a'&&s[i]<='z'){
				a[s[i]-'a']++;
				count++;
			}
			else if(s[i]>='A'&&s[i]<='Z')
				a[s[i]-'A']++;
				count++;
		}
	}
	
	for(int i=count;i>=1;i--){
		for(int j=0;j<26;j++){
			if(a[j]==i){
				printf("%c %d\n" , j+'A' , i);
			}
		}
	}
return 0;
}




