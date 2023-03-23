#include<bits/stdc++.h>
using namespace std;

struct DNA{
	string str;
	int num;
	int non;
}D[1010];

bool cmp(DNA a, DNA b){
	if(a.non == b.non) return a.num < b.num;
	else return a.non < b.non;
}

int main(){
	int t, len, Case;
	cin >> t;
	while(t--){
		cin >> len >> Case;
		for(int i = 0; i < Case; i++){
			cin >> D[i].str;
			D[i].non = 0;
			for(int j = 0; j < len-1; j++){
				for(int k = j+1; k < len; k++){
					if(D[i].str[j] > D[i].str[k]) D[i].non++;
				}
			}
			D[i].num = i;
		}
		sort(D, D+Case, cmp);
		for(int i = 0; i < Case; i++){
			cout << D[i].str << endl;
		}
		if(t) cout << endl;
	}
}
