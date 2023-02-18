#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
    	long long int first,second;
        cin >> first >> second;
		if(first > second){
			swap(first, second);
		}
        if((first+second)%3 == 0 && (first*2) >= second) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
} 
