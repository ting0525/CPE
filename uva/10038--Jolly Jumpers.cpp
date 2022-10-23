#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	long int n,last;
	long long int x[3001]={0};
	while(cin>>n){
		long long int c[3001]={0};
		for(int i=0;i<n;i++){
			scanf("%lld" , &x[i]);
		}
		for(int i=1;i<n;i++){
			c[abs(x[i-1]-x[i])]=1;   //紀錄是否每個數都有出現過 
		}
		for(int i=1;i<=n;i++){
			if(c[i]==0){            //檢查 
				last=i;
				break;
			}
		} 
		if(last==n)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	}
	return 0;
}
