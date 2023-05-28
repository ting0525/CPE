#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long n;
	cin >> t;
	for(int i = 1; i <= t; ++i ){
		cin >> n;
		n = n*(n-1)/2;
		if(n & 1) printf("Case %d: %lld/2\n", i, n);
		else printf( "Case %d: %lld\n", i, n/2);
	}
}
