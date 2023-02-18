#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	const int INF = 1e9;
	cin >> n >> x;
	vector<int> coin(n);
	vector<int> number_of_coin(x+1,INF);
	for(int i = 0; i < n; i++){
		cin >> coin[i];
	}
	
	number_of_coin[0] = 0;
	for(int value = 1; value <= x; value++){
		for(int j = 0; j < n; j++){
			if(value-coin[j] >= 0){
				number_of_coin[value] = min(number_of_coin[value], number_of_coin[value-coin[j]]+1); //min(原本的 or 新計算的) 
			}
		}
	}
	if(number_of_coin[x] == INF){
		cout << "-1" << endl;
	}
	else{
		cout << number_of_coin[x] << endl;
	}
}
