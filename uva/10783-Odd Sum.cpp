#include<iostream>
using namespace std;
int main(){
	int a,b;
	int k;
	int Case=1;
	cin>>k;
	while(k--){
		int ans=0;
		cin>>a>>b;
		if(a%2==0){
			a++;
		}
		for(int i=a;i<=b;i+=2){
			ans+=i;
		}
		printf("Case %d: %d\n" , Case++ , ans);
	}	
} 
