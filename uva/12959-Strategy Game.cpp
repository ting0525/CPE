#include<bits/stdc++.h>
using namespace std;

int main(){
	int J, R;
	while(cin >> J >> R){
		int arr[10000] = {0};
		if(!J && !R) break;
		for(int i = 1; i <= J*R; i++){
			int tmp;
			cin >> tmp;
			arr[i%J] += tmp;
		}
		int Max = -1;
		int ans = 0;
		for(int i = 1; i < J; i++){
			if(Max <= arr[i]){
				Max = arr[i];
				ans = i;
			}
		}
		if(Max <= arr[0]) cout << J << endl;
		else cout << ans << endl; 
	}	
} 
