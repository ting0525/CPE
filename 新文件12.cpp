#include<iostream>
using namespace std;
int main(){
	int t;
	while(cin>>t){
		int flag=0;
		long long x[3010]={0};
		long long ans[3010]={0};
		for(int i=0;i<t;i++){
			cin>>x[i];
		} 
		cout<<"1111111";
		for(int i=1;i<t;i++){
			ans[abs(x[i]-x[i-1])]=1;
			cout<<abs(x[i]-x[i-1])<<endl;
		}
		for(int i=1;i<=t;i++){
			if(ans[i]==0){
				if(i==t) cout<<"Jolly"<<endl;
				else cout<<"Not jolly"<<endl;
				break;
			}
		}
	}
} 
