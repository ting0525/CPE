#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int index = 0, count = 1;
	vector<int> v(n+1);
	v[0] = 0;
	
	for(int i = 0; i < n; i++){
		cin >> index;
		v[index] = i;
	}
	
	for(int i = 1; i < n+1; i++){
		if(v[i-1] > v[i]) count++;
	}
	cout << count << "\n";
}
