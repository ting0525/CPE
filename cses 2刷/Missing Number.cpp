#include<bits/stdc++.h>
using namespace std;

int main(){
    long long level = 0, ans, tmp;
    cin >> level;
    ans = (1+level)*level/2;  //計算總和 
    while(--level){
        cin >> tmp;
        ans -= tmp; //總和-(1+...+n - x) 
    }
    cout << ans << "\n";
    return 0;
}
