#include<bits/stdc++.h>.
#define MAXN 1000010
using namespace std;
vector<pair<int, int>> v;
int main(){
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    a = 0;
    b = 0;
    for(auto i:v){
        if(i.second >= a){
            a = i.first;
            b++;
        }
    }
    cout << b << endl;
    return 0;
}

