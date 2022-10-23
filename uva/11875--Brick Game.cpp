#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t,peo;
	int tmp,Case=1;
	cin>>t;
	while(t--){
		vector<int> people;
		cin>>peo;
		for(int i=0;i<peo;i++){
			cin>>tmp;
			people.push_back(tmp);
		}
		sort(people.begin(),people.end());
		int len=people.size();
		cout<<"Case "<<Case++<<": "<<people[len/2]<<endl;
	}
} 
