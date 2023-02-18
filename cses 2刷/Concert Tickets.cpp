#include<bits/stdc++.h>
using namespace std;

int main(){
    int tick, custor, custor_want;
    cin >> tick >> custor;
    multiset<int> price;  
    while(tick--){
        int tmp;
        cin >> tmp;
        price.insert(tmp);
    }
    price.insert(-1);
    while(custor--){
        cin >> custor_want;
        auto iter = price.upper_bound(custor_want); 
        int ret = *(--iter);
        cout << ret << endl;
        if(ret != (-1)) price.erase(iter);
    }
}
