#include<iostream>
#include<string>
using namespace std;
int t,Case=1,n,ans,r;
string s;
int main(){
    cin>>t;
    while(t--){
        cin>>n; //�Цa���� (����string�o�ӼƴN�S���ΤF ����J�n�D) 
        cin>>s;
        ans=0;
        r=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.' && i>r){
                r=i+2;   //�Ĥ@��'.'���ӳ��Q�O�@ ... 
                ans++;  //                         _*_  
            }
        }
        cout<<"Case "<<Case++<<": "<<ans<<"\n";
    }
}
