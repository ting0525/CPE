#include<bits/stdc++.h>
using namespace std;

int T, i;
long long n;

int main(){
	cin >> T;
	int count = 0;
	while(T--){
		cin >> n;
		n = n*(n-1)/2;
		if(n&1) printf( "Case %d: %lld/2\n", ++count, n);
		else printf( "Case %d: %lld\n", ++count, n/2);
	}
	return 0;
}
