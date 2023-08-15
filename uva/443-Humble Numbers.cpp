#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[6000];
	int n2 = 1, n3 = 1, n5 = 1, n7 = 1;
	arr[1] = 1;
	for(int i = 2; i <= 5900; i++){
		while(arr[n2]*2 <= arr[i-1]) n2++;
		while(arr[n3]*3 <= arr[i-1]) n3++;
		while(arr[n5]*5 <= arr[i-1]) n5++;
		while(arr[n7]*7 <= arr[i-1]) n7++;
		arr[i] = min(arr[n2]*2, min(arr[n3]*3, min(arr[n5]*5, arr[n7]*7)));
	}
	int num = 0;
	while(cin >> num && num){
		if(num%100 == 11 || num%100 == 12 || num%100 == 13) printf("The %dth humble number is %d.\n", num, arr[num]);
		else{
			if(num%10 == 1) printf("The %dst humble number is %d.\n", num, arr[num]);
			else if(num%10 == 2) printf("The %dnd humble number is %d.\n", num, arr[num]);
			else if(num%10 == 3) printf("The %drd humble number is %d.\n", num, arr[num]);
			else printf("The %dth humble number is %d.\n", num, arr[num]);
		}
	}
} 
