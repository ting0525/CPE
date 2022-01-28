#include<stdio.h>
int main(){
	int cola,count=0;
	while(scanf("%d" , &cola)!=EOF){
		count=0;
		while(cola>=3){
			count+=3;
			cola-=2;
			
		} 
		if(cola==2){
			count+=3;
		}
		else
			count=count+cola;
		
		printf("%d\n" , count);
		
	}
return 0;
} 
