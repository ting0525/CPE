#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int num;
    while(cin>>num){
    	string str;
        if(num<0)
			break;
        if(num==0){ 
			cout<<"0\n";
			continue;
		} 
        while(num){
            str+='0'+(num%3);
            num/=3;
        }
        reverse(str.begin(), str.end());
        cout<<str<<"\n";
    }
}
