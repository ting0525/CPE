#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int v[10000];
		int C;
		cin>>C; 
		double ans=0;
		for(int i=0;i<C;i++){
			cin>>v[i];
			ans+=v[i];
		}
		ans/=C;
		double cnt=0;
		for(int i=0;i<C;i++){
			if(v[i]>ans){
				cnt++;
			}
		}
		printf("%.3lf%%\n" , cnt*100/C);
		
	}
}
