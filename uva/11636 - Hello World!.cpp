#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	int Case = 0;
	while(cin >> num && num != -1){
		int count = 0, sum = 1, line = 1;
		while(sum < num){
			sum += line;
			count++;
			line *=2;
		}
		printf("Case %d: %d\n", ++Case, count);
	}
} 
