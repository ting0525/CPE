#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str;
	bool turn=false;                   //�P�_�ĴX�� 
	while(getline(cin,str)){           //��J�r�� 
		for(int i=0;i<str.size();i++){
			if(turn==false&&str[i]=='"'){   //�Ĥ@�� 
				cout<<"``";
				turn=true;
			}
			else if(turn==true&&str[i]=='"'){  //�ĤG�� 
				cout<<"''";
				turn=false;
			}
			else{                         //�@��r�� 
				cout<<str[i];
			}
		}
		cout<<endl;
	}
} 
