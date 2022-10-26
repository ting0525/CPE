#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int num=0,sum=0;
		cin>>num;
		for(int i=1;i<num;i++){
			if(num%i==0){
				sum+=i;
			}
		}
			if(sum>num){
				cout<<"abundant\n";
			}
			else if(sum<num){
				cout<<"deficient\n";
			}
			else{
				cout<<"perfect\n";
			}
	}
} 
