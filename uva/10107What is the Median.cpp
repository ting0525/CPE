#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int num[10000];
	int n,i=0,length=0,median=0;
	while(cin>>n){
		num[i++]=n;
		length++;
		sort(num,num+length);      //不必用插入的方法 只需要每次輸入數後重新對array做排序好 
		if(length==1)             //長度為1就輸出那個數 
			cout<<num[0]<<endl;
		else{
			if(length%2==0){     //如果長度為偶數那就輸出中間兩個的平均 
				median=(num[(length-1)/2]+num[length/2])/2;
			}
			else{               //如果長度為奇數就輸出array中間的數 
				median=num[length/2];  
			}
			cout<<median<<endl;
		}
	}
} 
