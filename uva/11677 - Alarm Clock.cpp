#include<bits/stdc++.h>
using namespace std;

int main(){
	int h1, h2, s1, s2;
	int day = 1440;
	int first, second;
	int ans = 0;
	while(cin >> h1 >> s1 >> h2 >> s2 && (h1 || h2 || s1 || s2)){
		first = h1*60+s1;
		second = h2*60+s2;
		if(first > second) ans = 1440-first+second;
		else ans = second-first;
		cout << ans << endl;
	}
} 
