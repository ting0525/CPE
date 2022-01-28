#include<stdio.h>

int main(){
	
	int a,b,c,n,i,j;   //a=ii b=jj
	
	while(scanf("%d%d" , &a , &b)!=EOF){
		int max=0;
		if(a>b){
			i=b;
			j=a;
		}		
		else{
			i=a;
			j=b;
		}
	

	for(int k=i;k<=j;k++){
		n=k;
		c=0;
		
		while(n!=1){
			c++;
			
			if(n%2==1)
				n=3*n+1;
			else
				n=n/2;
		}
		
		c++;
		
		if(c>max)
			max=c;
	}
	printf("%d %d %d\n" , a , b , max);

}


return 0;



}
