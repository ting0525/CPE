#include<bits/stdc++.h>
using namespace std;

vector<string> gray_code(int n){
    if(n == 1){
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        return v;
    }
    else{
        vector<string> v1;
        vector<string> v2;
        v2=gray_code(n-1);
        
        for(int i = 0; i < v2.size(); i++){
            v1.push_back("0"+v2[i]);
        }
        for(int i = (v2.size()-1);i >= 0; i--){
            v1.push_back("1"+v2[i]);
        }
        
        return v1;
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> v;
    v = gray_code(n);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}
