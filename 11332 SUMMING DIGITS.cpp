#include<stdio.h>

int main(){
	
	int n;
	
	while(scanf("%d\n" , &n)!=EOF){
			while(n>9){
				n=n/10+n%10;
			}
			if(n>0) 
			printf("%d" , n);
		}
	return 0;
}
