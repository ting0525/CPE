#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
	int time=1;
	string str="";
	while(cin>>str){
		int t;
		cin>>t;
		int input1[10000]={0};
		int input2[10000]={0};
		for(int i=0;i<t;i++){
			cin>>input1[i];
			cin>>input2[i]; 
		}
		printf("Case %d:\n" , time++);
		for(int i=0;i<t;i++){
			int flag=1;
			if(input1[i]>input2[i]) swap(input1[i],input2[i]);
			for(int j=input1[i];j<=input2[i];j++){
				if(str[j]!=str[input1[i]]){
					flag=0;
					cout<<"No"<<endl;
					break;
				}
			}
			if(flag==1) cout<<"Yes"<<endl;
		}
		
	}
}
