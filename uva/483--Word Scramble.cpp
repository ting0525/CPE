#include<bits/stdc++.h>
using namespace std;
int main(){
	string input;
	int count=1;
	while(getline(cin,input)){
    	stringstream ss;
    	ss<<input; //�Ninput���ss�� 
		int c=0;  //�P�_�O�_���Ĥ@�� 
      	while(ss>>input){ //�Nss�����eŪ�Jinput �����@�q�@�q 
			if(c>0) cout<<" ";
        	for(int i=input.size()-1;i>=0;i--) cout<<input[i];
			c++;
      	}
      	cout<<endl;
   }
}
