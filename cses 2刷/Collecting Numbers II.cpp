#include<iostream>
using namespace std;

long long table[1000000];

int main(){
    int n,x;
    cin >> n >> x;
    long long ntype[n];
    table[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> ntype[i];
    }
    for(int c : ntype){
        for(int i = 1; i <= x; i++){
            if(i-c >= 0 && table[i-c] != 0){
                table[i] += table[i-c] % int(1e9+7);
            }
        }
    }
    cout << table[x]%int(1e9+7) << endl;
    return 0;
}
