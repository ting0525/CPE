#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	int t;
	cin>>t;
	while(t--){
		cin>>str;
		int num3=0;
		int num4=0;
		int ans=0;
		num3+=(str[0]-'A')*26*26;
		num3+=(str[1]-'A')*26;
		num3+=(str[2]-'A');
		num4+=(str[4]-'0')*1000;
		num4+=(str[5]-'0')*100;
		num4+=(str[6]-'0')*10;
		num4+=(str[7]-'0');
		ans=abs(num3-num4);
		if(ans<=100)
			cout<<"nice"<<endl;
		else
			cout<<"not nice"<<endl;
	}
} 
