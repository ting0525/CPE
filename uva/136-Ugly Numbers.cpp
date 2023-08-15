#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int arr[1510] = {0};
	arr[1] = 1;
	int two = 1, three = 1, five = 1;
	for(int i = 2; i <= 1500; i++){
		while(arr[two]*2 <= arr[i-1]) two++;
		while(arr[three]*3 <= arr[i-1]) three++;
		while(arr[five]*5 <= arr[i-1]) five++;
		arr[i] = min(arr[two]*2, min(arr[three]*3, arr[five]*5));
	}
	cout << "The 1500'th ugly number is " << arr[1500] << ".\n";
}
