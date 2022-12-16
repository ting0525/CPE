#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int A,F;
		cin>>A>>F;
		
		for(int i=0;i<F;i++){
			for(int j=1;j<=A;j++){
				for(int k=1;k<=j;k++){
					cout<<j;
				}
				cout<<"\n";
			}
			for(int j=A-1;j>0;j--){
				for(int k=j;k>0;k--){
					cout<<j;
				}
				cout<<"\n";
			}
			
			cout<<"\n";
		}
		cout<<"\n";
	}
}
