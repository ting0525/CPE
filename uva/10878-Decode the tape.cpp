#include <iostream>
#include <string>
using namespace std;
int main(){
	char ch=0;
	int num;
	string s,fs;
	while(getline(cin,s)){
		fs="";
		while (getline(cin,s)){
			if (s[0]=='_') 
				break;
			for(int i=1;i<=9;i++){
				if(s[i]==' ') 
					ch<<=1;	   //ÅÞ¿è¥ª²¾ 
        		else if(s[i]=='o') { 
					ch<<=1;    //ÅÞ¿è¥ª²¾ 
					ch++;      //¥[+1 
				} 
        		else if(s[i]=='.') 
					continue;             
      		}
      		fs=fs+ch;       
    	}
    	cout << fs ;  
	}
}

/*
|=o===.==o|
/01000.001/
*/
