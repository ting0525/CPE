#include<bits/stdc++.h>
using namespace std;

int main(){
	const int mod = 1e9+7;
	int coin_type, value;
	cin >> coin_type >> value;  //�w�������ƶq �`�� 
	vector<int> coin(coin_type); //�w���`��
	
	//��J 
	for(int i = 0; i < coin_type; i++){
		cin >> coin[i];
	}

	
	vector<long long int> combination(value+1,0);
	combination[0] = 1;
	for(int i = 1; i <= value; i++){
		for(int j = 0; j < coin_type; j++){
			if(i-coin[j] >= 0){
				combination[i] = combination[i]+combination[i-coin[j]];
				combination[i] %= mod;
			}
		}
	}
	cout << combination[value] << "\n";
	
} 
