#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    string str;
    cin>>t;
    //getline(cin,str); //��Jspace��enter�ӲM��cin 
    fflush(stdin); //�M��cin���w�İ�
	while(t--){
        getline(cin,str);
        map<char,int> mp;
        int mx=0;
        for(int i=0;i<str.size();i++){
            if(str[i]>='a' && str[i]<='z'){
                mp[str[i]]++;
                mx=max(mx,mp[str[i]]);
            } 
			else if(str[i]>='A' && str[i]<='Z'){
                str[i]='a'+(str[i]-'A');
                mp[str[i]]++;
                mx=max(mx,mp[str[i]]);
            }
        }
        for(auto i:mp){
            if(i.second==mx){
                cout<<i.first;
            }
        }
        cout<<"\n";
    }
    return 0;
}
