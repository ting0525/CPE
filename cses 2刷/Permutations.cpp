#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, one = 1, two = 2;
	cin >> n;
	if(n == 1) cout << 1 << endl;
	
	if(n <= 3) cout << "NO SOLUTION" << endl;
	
	while(two <= n){
		printf("%d " , two);
		two += 2;
	}
	while(one <= n){
		printf("%d " , one);
		one += 2;
	}
}
