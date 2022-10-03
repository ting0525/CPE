#include<iostream>
#include<string>
using namespace std;
int main(){
	int nums[5];
	int target,n=0,arr,sum;
	cin>>target;
	for(int i=0;;i++){
		cin>>nums[n];
		n++;
		if(getchar()=='\n'){
			break;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum=nums[i]+nums[j];
			if(sum==target){
				cout<<i<<" "<<j;
				break;
			}
		}
		
	}
}
