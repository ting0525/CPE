#include<stdio.h>

int main(){
	
	long long int a,b;
	int carry,count;
	
	while(scanf("%lld%lld" , &a ,&b)!=EOF){
	while(a!=0&&b!=0){
		carry=0;
		count=0;
		
		while(a!=0&&b!=0 || carry != 0){
			carry=a%10+b%10+carry;
			carry=carry/10;
			a/=10;
			b/=10;
			if(carry!=0)
				count++;
		
			/*if((a % 10) + (b % 10) + carry >= 10){
				carry = 1;
				count++;
			}
			else
			{
				carry = 0;
			}
			a/=10;
			b/=10;*/
			
		}
		if(count==0)
			printf("No carry operation.\n");
		else if(count==1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n" , count);
			
			
		//scanf("%lld%lld" , &a ,&b);		
	}
	
}
	return 0;
}
