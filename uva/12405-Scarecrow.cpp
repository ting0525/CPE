#include<iostream>
#include<string>
using namespace std;
int t,Case=1,n,ans,r;
string s;
int main(){
    cin>>t;
    while(t--){
        cin>>n; //田地長度 (其實用string這個數就沒屁用了 但輸入要求) 
        cin>>s;
        ans=0;
        r=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.' && i>r){
                r=i+2;   //第一個'.'後兩個都被保護 ... 
                ans++;  //                         _*_  
            }
        }
        cout<<"Case "<<Case++<<": "<<ans<<"\n";
    }
}
