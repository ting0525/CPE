#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,count=0;
	char s[1000]={0};
	int callout[26]={0};
	scanf("%d\n" , &n);
	for(int x=0;x<n;x++){                  //將字串拆開放入callout 
		gets(s);
		for(int i=0;i<strlen(s);i++){     
			if(s[i]>='a'&&s[i]<='z'){      
				callout[s[i]-'a']++;       //將a~z照0~25排好 
				count++;
			}
			else if(s[i]>='A'&&s[i]<='Z')  ////將A~Z照0~25排好
				callout[s[i]-'A']++;
				count++;
		}
	}
	
	for(int i=count;i>=1;i--){
		for(int j=0;j<26;j++){
			if(callout[j]==i){                   //利用註標找出與次數對應的字元 並由大到小輸出(輸出以大寫來統稱大小寫) 
				printf("%c %d\n" , j+'A' , i);
			}
		}
	}
return 0;
}




