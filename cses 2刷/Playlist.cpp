#include<bits/stdc++.h>
using namespace std;


map<int , int> arr;


int main(){	
	int start = 0, list_len = 0, n, list_number;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> list_number;
		//cout<<"i: "<<i<<endl<<"list_number: "<<list_number<<endl;
		//�C��id�̫᪺�X�{��m 
		start = max(start , arr[list_number]);
		
		
		//printf("start: %d  arr[%d]: %d\n" , start, list_number, arr[list_number]);
		//�̪����s��ǦC 
		list_len = max(list_len , i - start);  //�Q��i - start�����ثe����  
		
		//printf("list_len: %d  i(%d) - start: %d\n" , list_len, i, i - start);
		//��������id�̫᪺�X�{��m 
		arr[list_number] = i;
		
		//printf("arr[%d]: %d\n\n" , i, arr[list_number]);
	}
	cout << list_len << endl;
} 
