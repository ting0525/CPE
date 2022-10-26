#include<iostream>
using namespace std;
int main(){
	int t;
	while(cin>>t&&t){
		int ans=0;
		for(int i=t;i>0;i--){
			ans+=i*i;
		}
		cout<<ans<<endl;
	}
} 
