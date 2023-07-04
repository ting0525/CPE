#include<bits/stdc++.h>
using namespace std;

int main(){
	string str = "";
	while(cin >> str && str != "0"){
		int number = 0;
		for(int i = 0; i < str.size(); i++){
			number += str[i]-'0';			
		} 
		//cout << number << endl;
		int count = 0;
		while(number >= 9){
			count++;
			if(number == 9) break;
			int tmp = 0;
			while(number){
				tmp += number%10;
				number /= 10;
			}
			number = tmp;
		}
		if(number%9 != 0) printf("%s is not a multiple of 9.\n", str.c_str());
        else printf("%s is a multiple of 9 and has 9-degree %d.\n", str.c_str(), count);
	}
} 
