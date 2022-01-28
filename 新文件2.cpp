#include<stdio.h>

int main(){
	int a,b,c;
	while(scanf("%d%d" , &a,&b)!=EOF){
		if(b>a){
			a=a+b;
			b=a-b;
			a=a-b;
			printf("%d%d" , a , b);
		}
		
	}
	
	
	
	
	
	
} 
