#include<stdio.h>
#include<string.h>
int main(){
	
	int n,max=0;
	char line[1000],c,f;
	int count[127]={0};
	scanf("%d\n" , &n);
	for(int i=0;i<n;i++){
		gets(line);
		for(int j=0;j<strlen(line);j++){
			c=line[j];
			if(c>='a'&&c<='z')
				c=c-32;
			if(c>='A'&&c<='Z')
				count[c]++;
		}
	}
	max=0;
	for(c='A';c<='Z';c++){ 
		if(count[c]>max)
			max=count[c];
	}
	
	f=max;
	
	while(f>0){
		max=0;
		for(c='A';c<='Z';c++){ 
			if(count[c]==f)
			printf("%c %d\n" , c , f);
			else if(count[c]<f)
				if (max<count[c])
					max=count[c];
					
			} 
	f=max;
	
	}
	return 0;
	} 
	

