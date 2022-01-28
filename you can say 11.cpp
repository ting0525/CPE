#include<stdio.h>
#include<string.h>
int main(){
	 
	char a[1001];
	int x,y;
	scanf("%s" , a);
	while(strlen(a)>0||a[]!='0'){
		x=0;
	 	y=0;
		for(int i=0;i<strlen(d);i++){
			if(i%2==1)
				x=x+a[i]-'0';
			else
				y=y+a[i]-'0';
	 	}
		if(x%11==y%11)
			printf("%s is a multiple of 11.\n" , a);
		else
			printf("%s is not a multiple of 11.\n");
		
		
		scanf("%s" , a);	
	
	
} 




	return 0;
}
