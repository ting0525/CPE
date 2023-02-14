#include<bits/stdc++.h>
using namespace std;
int main(){
	string input;
	int count=1;
	while(getline(cin,input)){
    	stringstream ss;
    	ss<<input; //將input放到ss中 
		int c=0;  //判斷是否為第一次 
      	while(ss>>input){ //將ss的內容讀入input 分為一段一段 
			if(c>0) cout<<" ";
        	for(int i=input.size()-1;i>=0;i--) cout<<input[i];
			c++;
      	}
      	cout<<endl;
   }
}
