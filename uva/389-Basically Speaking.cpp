#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int base1, base2;
	while(cin >> str >> base1 >> base2){
		int base_ten = 0, pow = 1;
		string ans = "";
		// base1 to dec
		for(int i = str.size()-1; i >= 0; i--){
			if(str[i] >= '0' && str[i] <= '9'){
				base_ten += (str[i]-'0')*pow;
			}
			else{
				base_ten += (str[i]-'A'+10)*pow;
			}
			pow *= base1;
		}
		//cout << "base_ten: " << base_ten << endl;
		// dec to base2
		while(base_ten > 0){
			if(base_ten%base2 < 10){
				//cout << base_ten%base2+'0' << endl;
				ans.push_back(base_ten%base2+'0');
			}
			else{
				//cout << base_ten%base2+'A'-10 << endl;
				ans.push_back(base_ten%base2-10+'A');
			} 
			base_ten /= base2;
		}
		
		
		if(ans.size() > 7) cout << "  ERROR";
		else{
			if(ans.empty()) ans.push_back('0');
			int sp = 7 - ans.size();
			while (sp-- != 0) cout << " ";
			for (int i = ans.size() - 1; i >= 0; --i) cout << ans[i];
		}
		cout << "\n";
		
		
	}
} 
