#include<bits/stdc++.h>
using namespace std;

int main(){
	int start, one, two, three;
	while(cin >> start >> one >> two >> three && (start || one || two ||three)){
		int angle = 0;
		angle = 120+(40+start-one)%40+(40+two-one)%40+(40+two-three)%40;
		cout << angle*9 << endl;
	}
}
