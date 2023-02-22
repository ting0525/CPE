#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	while(a && b){
        if(a >= b) a = a%b;
        else if(b > a) b = b%a;
    }

    if(a > b) return a;
    else return b;
}

int main(){
	int n;
	while(cin >> n && n){
		int G=0;
		for(int i = 1; i < n; i++){ 
			for(int j = i+1; j <= n; j++){
				G += GCD(i, j);
			}
		} 
		cout << G << endl;
	}
}
