#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<char,int> m={{'W' , 64} , {'H' , 32} , {'Q' , 16} , {'E' , 8} , {'S' , 4} , {'T' , 2} , {'X' , 1}};
    string str;
    while(cin>>str){
    	if(str=="*")
    		return 0;
        int sum=0,ans=0;
        for(int i=1;i<str.size();i++){
            if(str[i]=='/'){
                if(sum==64){
                	ans++;	
				}
                sum=0;
            } 
			else{
                sum+=m[str[i]];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
