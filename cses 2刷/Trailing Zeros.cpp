#include<bits/stdc++.h>
using namespace std;

int trailing_zeroes(int n){
    int count = 0;
    while(n){
    	n /= 5;
        count += n;
    }
    return count;
}

int main(){
	int num;
	cin >> num;
	cout << trailing_zeroes(num) << endl;
} 
