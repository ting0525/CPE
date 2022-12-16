#include <iostream>
using namespace std;
 
int main() {
    long long n;
    while (cin >> n && n>0){
        if (n == -1) break;
        if (n <= 1) cout << "0%\n";
        else cout << n * 25 << "%\n";
    }
}
