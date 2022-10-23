#include<iostream>
using namespace std;
int main(){
	string str;
	while(cin>>str){
		int ans=0;
		bool isprime=true;
		for(int i=0;i<str.size();i++){
			if(str[i]>='a' && str[i]<='z'){
				ans+=str[i]-'a'+1;
			}
			else if(str[i]>='A' && str[i]<='Z'){
				ans+=str[i]-'A'+27;
			}
		}
		for(int i=2;i<ans;i++){
			if(ans%i==0){
				isprime=false;
				break;
			}
		}
		if(isprime==false)
			cout<<"It is not a prime word."<<endl;
		else
			cout<<"It is a prime word."<<endl;
	}
}
