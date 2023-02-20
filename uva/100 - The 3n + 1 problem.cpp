#include<bits/stdc++.h>
using namespace std;

int f(int num){
	int len = 1;
	while(num != 1){
		if(num & 1) num = num*3+1;
		else num /= 2;
		len++;
	}
	return len;
}
int main(){
	int a, b;
	while(cin >> a >> b){
		int ans = 0;
		cout << a << " " << b << " ";
		for(int i = min(a, b); i <= max(a, b); i++){
			ans = max(f(i), ans);
		}
		cout << ans << endl;
	}
} 
