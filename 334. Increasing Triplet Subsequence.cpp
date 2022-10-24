#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	int nums,tmp,Case=1;
	cin>>t;
	while(t--){
		int high=0,low=0;
		vector<int> v;
		cin>>nums;
		for(int i=0;i<nums;i++){
			cin>>tmp;
			v.push_back(tmp);
		}
		for(int i=0;i<v.size()-1;i++){
			if(v[i]<v[i+1])
				high++;
			else if(v[i]>v[i+1]){
				low++;
			}
		}
		printf("Case %d: %d %d\n" , Case++ ,high ,low);
	}
} 
