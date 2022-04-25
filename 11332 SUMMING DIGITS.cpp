#include<iostream>
using namespace std;
int main(){
	
	int n;
	
	while(cin>>n){
			while(n>9){
				n=n/10+n%10;
			}
			if(n>0) 
				printf("%d\n" , n);
		}
	return 0;
} 
