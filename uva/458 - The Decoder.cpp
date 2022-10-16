#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	while(getline(cin,str)){
		for(int i=0;i<str.size();i++){
			str[i]-=7;     //accsii-7 
			cout<<str[i];
		}
		cout<<endl;
	}
} 
