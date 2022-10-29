#include<iostream>
#include<cstring>
#include<array>
#include<algorithm>
using namespace std;
int main(){
	int time;
	int number;
	long long int arr[50000];
	cin>>time;
	while(time--){
		int sum=0;
		cin>>number;
		for(int i=0;i<number;i++){
			cin>>arr[i];
		} 
		sort(arr,arr+number,greater<int>());
		if(number<2){
			cout<<"0\n";
			continue;
		}
		for(int i=2;i<number;i+=3){
			sum=sum+arr[i];
		} 
		cout<<sum<<endl;
	}
} 
