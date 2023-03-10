#include<bits/stdc++.h>

using namespace std;

int visit[34000];
int prime[34000];

//計算因數的個數 
int number(int a, int n){ //a為目標number n為質數表的長度 
	int sum = 1;
	for(int i = 0; a > 1 && i < n; i++){ 
		if(a%prime[i] == 0){
			int count = 1;
			while(a%prime[i] == 0){
				count++;
				a /= prime[i];
			}
			sum *= count;
		}
	}
	return sum;
}

//使用篩表法找出質數 
int PRIME(int count){
	for(int i = 0; i < 34000; i++){
		visit[i] = 1;
	}
	
	for(int i = 2; i < 34000; i++){ 
		if(visit[i]){  //已判斷為非質數的數為 0 未判斷或者卻認為質數者為 1 
			prime[count++] = i;
			for(int j = 2*i; j < 34000; j += i ){ //J為質數 而他的倍數皆不是質數 
				visit[j] = 0;	
			}
		}
	} 
	return count;
	//cout << "count: " << count << endl;
}

int main(){	
	int count = PRIME(0);
	long long int a, b, t;
	while(cin >> t){
		while(t--){
			cin >> a >> b; //起點 終點 
			long long int save = a, max = 0, temp;
			for(long long int i = a; i <= b; i++){
				temp = number(i, count);
				if(temp > max){
					max = temp;
					save = i;
				}
			}
			printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, save, max);
		}
	}
}

/*
以1000為例 
短除法
2 1000
2  500
2  250
5  125
5   25
5    5
     1 

1000的因數:  16種 
1000 500 250 200 125 100 50 25
   1   2   4   5   8  10 20 40 

他們皆可以由 2、5組成
排列一下
2: 0, 1, 2, 3  有四種可能 
5: 0, 1, 2, 3  有四種可能

4*4 = 16# 
*/

