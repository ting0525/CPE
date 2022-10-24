#include <iostream>
using namespace std;
  
int main() {  //求兩個最遠點的距離*2 (從頭到尾 再從尾到頭) 
    int T, n;
    cin >> T;
    for (int Case = 1; Case <= T; Case++) {
        cin >> n;
        int x, mn = 100, mx = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x > mx) mx = x;
            if (x < mn) mn = x;
        }
        cout << (mx - mn) * 2 << "\n";
    }
    return 0;
}
