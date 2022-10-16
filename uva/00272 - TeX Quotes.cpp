#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	bool turn=false;                   //判斷第幾個 
	while(getline(cin,str)){           //輸入字串 
		for(int i=0;i<str.size();i++){
			if(turn==false&&str[i]=='"'){   //第一個 
				cout<<"``";
				turn=true;
			}
			else if(turn==true&&str[i]=='"'){  //第二個 
				cout<<"''";
				turn=false;
			}
			else{                         //一般字元 
				cout<<str[i];
			}
		}
		cout<<endl;
	}
} 
