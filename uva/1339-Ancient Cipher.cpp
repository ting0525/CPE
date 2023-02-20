#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ,n ,m;
	string str1, str2;
	while(cin >> str1 >> str2){
		int ch1[26] = {0}, ch2[26] = {0};
		bool flag = true;
		for(int i = 0; i < str1.size(); i++) {
			ch1[str1[i]-'A']++;
			ch2[str2[i]-'A']++;
		}
		sort(ch1, ch1+26);
		sort(ch2, ch2+26);
		for(int i = 0; i < 26; i++){
			if(ch1[i] != ch2[i]){
				flag = false; 
				break;
			}	
		} 
		if(flag == false) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}

