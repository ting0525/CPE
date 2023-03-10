#include<bits/stdc++.h>
using namespace std;

bool prime_table[20000000];

void creat_table(){
	for(int i = 0; i <= 20000000; i++){
		prime_table[i] = true;
	}
	prime_table[0] = false;
	prime_table[1] = false;
	for(int i = 2; i <= 20000000; i++){
		if(prime_table[i]){
			for(int j = i*2; j <= 20000000; j += i){
				prime_table[j] = false;
			}
		}
	}
}



int main(){
	creat_table();
	int n;
	int prime_count[1000] = {0};
	while(cin >> n && n){
		memset(prime_count, 0, sizeof(prime_count));
		for(int i = 2; i <= n; i++){
			if(prime_table[i]){
				int tmp = n;
				while(tmp){
					prime_count[i] += tmp/i;
					tmp /= i;
				}
			}
		}
		int nextline = 0;
		printf("%3d! =", n);
		for(int i = 2; i <= n; i++){
			if(prime_table[i]){
				if(nextline == 15){
					cout << "\n      ";
					nextline = 0;	
				} 
				printf("%3d", prime_count[i]);
				nextline++;
			}
		}
		cout << endl;
	}
}






