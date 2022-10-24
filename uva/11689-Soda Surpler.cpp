#include <iostream>
using namespace std;
int main(){
    int t,null,add,change;
    cin>>t;
    while(t--){
        cin>>null>>add>>change;
        int ans=(null+add)/change;
        null=(null+add)%change+(null+add)/change;
        while(null>=change){
            ans+=null/change;
            null=null/change+null%change;
        }
        cout<<ans<<endl;
    }
    return 0;
}
