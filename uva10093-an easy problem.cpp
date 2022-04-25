#include<iostream>
using namespace std;
int main(){
	char str[10000];
	int a=0,sum=0,max=0,r=0;
	while(scanf("%s" , str)!=EOF){
		max=0;
		sum=0;
		for(int i=0;str[i]!='\0';i++){
			a=0;
			if(str[i]>='0'&&str[i]<='9')
				a=str[i]-'0';              //计0~9 
			if(str[i]>='A'&&str[i]<='Z')
				a=str[i]-'A'+10;           //计10~35 
			if(str[i]>='a'&&str[i]<='z')
				a=str[i]-'a'+36;           //计36~61 
			sum=sum+a;
			if(a>max)                      //т程 ノㄓ耞""程秈(﹚種) 
				max=a;
		}
		for(r=max+1;r<=62;r++){            //耞秈(程) 
			if((sum%(r-1))==0)
				break;
		}
		if(r<=62)
			cout<<r<<endl;
		else
			cout<<"such number is impossible!"<<endl;
	} 
} 








