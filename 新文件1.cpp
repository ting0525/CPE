#include<stdio.h>
#include<string.h>
int main(){
	char line[101][101];
	int n=0,length[101],i,j;
	int max=0,upbound;
	while(gets(line[n])){
		length[n]=strlen(line[n]);
		if(length[n]>max){
			max=length[n];
		}
		n++;
	} 
	for(j=0;j<max;j++){
		upbound=0;
		while(j>=length[upbound]){
			upbound++;
		}
		for(int i=n-1;i>=upbound;i--){
			if(j<length[i])
				putchar(line[i][j]);
			else
				putchar(' ');
			printf("\n");
		}
	}
	return 0;
}
