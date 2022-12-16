#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	while(getline(cin,str)){
		int count=0;
		bool flag=false;
		for(int i=0;i<str.size();i++){
			if((str[i]<'A' || str[i]>'z') && flag==true){
				count++;
				flag=false;
			}
			else if(str[i]>='A' && str[i]<='z'){
				flag=true;
			}
		}
		cout<<count<<endl;
	}
}
