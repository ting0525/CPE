#include<bits/stdc++.h>
using namespace std;

int table[100010] = {0};

int main(){
    int t, n;
    for(int i = 1; i < 100010; i++){
        int num = i, sum = i;
        while(num > 0){
            sum += num%10;
            num /= 10;
        } 
        if(table[sum] == 0) table[sum] = i;
		else table[sum] = min(table[sum], i);
    }
    cin >> t;
    while(t--){
        cin >> n;
        cout << table[n] << endl;
    }
}
