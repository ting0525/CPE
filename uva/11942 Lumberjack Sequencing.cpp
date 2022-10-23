#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool big_to_small(vector<int> num,vector<int> revnum){  //判斷大到小 
	sort(revnum.begin(),revnum.end(),greater<int>());
		for(int i=0;i<num.size();i++){
			if(revnum[i]!=num[i]){
				return false;
			}
		}
		return true;
}
bool small_to_big(vector<int> num,vector<int> revnum){   //判斷小到大 
	sort(revnum.begin(),revnum.end());
		for(int i=0;i<num.size();i++){
			if(revnum[i]!=num[i]){
				return false;
			}
		}
		return true;
}
int main(){
	int Case;
	int tmp;
	bool sw_b;
	bool sw_s;
	cin>>Case;   //測資數 
	cout<<"Lumberjacks:"<<endl;
	while(Case--){
		vector<int> num;
		vector<int> revnum;
		for(int i=0;i<10;i++){     //輸入 
			cin>>tmp;
			num.push_back(tmp);
		}
		revnum=num;
		sw_b=big_to_small(num,revnum);
		sw_s=small_to_big(num,revnum);
		
		
		if(sw_b==false && sw_s==false)  //既不是大到小也不是小到大 
			cout<<"Unordered"<<endl;
		else
			cout<<"Ordered"<<endl;
	}
}
