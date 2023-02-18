#include<iostream>
using namespace std;
int main() {
    int n,ans = 1;
    cin>>n;
    while(n--){
        ans = ans<<1;
        ans %= 1000000007;
    }
    cout<<ans;
}
