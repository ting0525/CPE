#include<bits/stdc++.h>
using namespace std;


map<int , int> arr;


int main(){	
	int start = 0, list_len = 0, n, list_number;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> list_number;
		//cout<<"i: "<<i<<endl<<"list_number: "<<list_number<<endl;
		//每個id最後的出現位置 
		start = max(start , arr[list_number]);
		
		
		//printf("start: %d  arr[%d]: %d\n" , start, list_number, arr[list_number]);
		//最長的連續序列 
		list_len = max(list_len , i - start);  //利用i - start紀錄目前長度  
		
		//printf("list_len: %d  i(%d) - start: %d\n" , list_len, i, i - start);
		//紀錄偉個id最後的出現位置 
		arr[list_number] = i;
		
		//printf("arr[%d]: %d\n\n" , i, arr[list_number]);
	}
	cout << list_len << endl;
} 
