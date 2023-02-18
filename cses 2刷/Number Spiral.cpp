#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int row, col;
	long long int ans = 0;
	int t;
	cin >> t;
	while(t--){
		cin >> row >> col;
		if(row > col){
			if(row%2 == 0){
				ans = row*row-col+1;
			}
			else if(row%2 == 1){
				ans = (row-1)*(row-1)+col;
			}
		}
		else{
			if(col%2 == 0){
				ans = (col-1)*(col-1)+row;
			}
			else{
				ans = col*col-row+1;
			}
		}
		cout << ans << "\n";
	}
} 
