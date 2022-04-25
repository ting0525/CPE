#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int compare(const void *a,const void *b){
	char *pa=(char *)a;
	char *pb=(char *)b;
	return *pa-*pb;
}
int main(){
	int i=0,j=0;
	char a[1000],b[1000];
	while(gets(a)!=NULL&&gets(b)!=NULL){   
		qsort(a,strlen(a),sizeof(char),compare);
		qsort(b,strlen(b),sizeof(char),compare);
		
		for(i=0 ,j=0; i<strlen(a)&&j<strlen(b);){
			if(a[i]==b[j]&&a[i]!=32&&b[j]!=32){           
				printf("%c" , a[i]); 
				i++;
				j++;
			}
			else if(a[i]>b[j])
				j++;
			else
				i++;
		}
		cout<<endl;
	}
	return 0;
} 










