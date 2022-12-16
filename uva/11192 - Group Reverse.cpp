#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	int team;
	while(cin>>team&&team){
		string str="";
		string ans="";
		cin>>str;
		int len=str.size();
		int ansnum=0;
		int reverse_len=len/team;
		stack<char> s;
		for(int i=0;i<len;i+=reverse_len){
			for(int j=i;j<i+reverse_len;j++){
				s.push(str[j]);
				//cout<<s.top()<<endl;
			}
			for(int j=0;j<reverse_len;j++){
				ans[ansnum]=s.top();
				cout<<ans[ansnum];
				s.pop();
				ansnum++;
			}
		}
		cout<<endl;
	}
} 
