#include<bits/stdc++.h>
using namespace std;

int main(){
    long long level = 0, ans, tmp;
    cin >> level;
    ans = (1+level)*level/2;  //�p���`�M 
    while(--level){
        cin >> tmp;
        ans -= tmp; //�`�M-(1+...+n - x) 
    }
    cout << ans << "\n";
    return 0;
}
