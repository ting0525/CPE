#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	while(cin >> num && num){
		int money[100010] = {0};
		for(int i = 0; i < num; i++){
			cin >> money[i];
		}
		int now = money[0];
		int Max = -1;
		for(int i = 1; i < num; i++){
			now += money[i];
			if(money[i] > now || now < 0) now = money[i];
			Max = max(now, Max);
		}
		if(Max < 0) cout << "Losing streak." << endl;
		else printf("The maximum winning streak is %d.\n", Max);
	}
}
