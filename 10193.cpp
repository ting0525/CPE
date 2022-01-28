#include<stdio.h>
int a(){
	char s[32];
	int n,i;
	scanf("%s" , &s);
	for(i=0,n=0;s[i]!='\0';i++){
		n=n*2+(s[i]-'0');
	}
	return n;
}
int main(){
	int x,y,k,z,g=1;
	scanf("%d" , &k);
	for(int i=0;i<k;i++){
		x=a();
		y=a();
		
		while(y>0){
			z=x%y;
			x=y;
			y=z;
		}
		if(x>1)
			printf("Pair #%d: All you need is love!\n" , g++);
		else
			printf("Pair #%d: Love is not all you need!\n" , g++);
	}
	
	
	return 0;
}

