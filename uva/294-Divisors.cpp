#include<bits/stdc++.h>

using namespace std;

int visit[34000];
int prime[34000];

//�p��]�ƪ��Ӽ� 
int number(int a, int n){ //a���ؼ�number n����ƪ����� 
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

//�ϥοz��k��X��� 
int PRIME(int count){
	for(int i = 0; i < 34000; i++){
		visit[i] = 1;
	}
	
	for(int i = 2; i < 34000; i++){ 
		if(visit[i]){  //�w�P�_���D��ƪ��Ƭ� 0 ���P�_�Ϊ̫o�{����ƪ̬� 1 
			prime[count++] = i;
			for(int j = 2*i; j < 34000; j += i ){ //J����� �ӥL�����ƬҤ��O��� 
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
			cin >> a >> b; //�_�I ���I 
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
�H1000���� 
�u���k
2 1000
2  500
2  250
5  125
5   25
5    5
     1 

1000���]��:  16�� 
1000 500 250 200 125 100 50 25
   1   2   4   5   8  10 20 40 

�L�̬ҥi�H�� 2�B5�զ�
�ƦC�@�U
2: 0, 1, 2, 3  ���|�إi�� 
5: 0, 1, 2, 3  ���|�إi��

4*4 = 16# 
*/

