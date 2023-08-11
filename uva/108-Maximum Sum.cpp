#include<bits/stdc++.h>
using namespace std;

int arr[10010][10010] = {0};
int count_arr[10010][10010] = {0};

int main(){
	int n;
	while(cin >> n){
		//input
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> arr[i][j];
			}
		}
		//計算每層的累積加總 
		memset(count_arr, 0, sizeof(count_arr));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				count_arr[i][j] = count_arr[i-1][j]+arr[i][j];
			}
		}
		//開始DP
		int Max = INT_MIN;
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j++){
				int new_sum = 0;
				for(int k = 1; k <= n; k++){
					new_sum += count_arr[j][k]-count_arr[i-1][k];
					Max = max(new_sum, Max);
					if(new_sum < 0) new_sum = 0;
				}
			}
		}
		cout << Max << endl;		
	}

	
} 
