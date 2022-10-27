#include<iostream>
#include<string>
using namespace std;
int main(){
	string sub,parent;
	while(cin>>sub>>parent){
		int s=0,p=0;
		while(s!=sub.size() && p!=parent.size()){
			if(sub[s]==parent[p])
				s++,p++;
			else
				p++;
		}
		if(s==sub.size())
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
} 
