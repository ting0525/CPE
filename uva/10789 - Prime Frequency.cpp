#include <iostream>  
#include <cstdlib>  
#include <cstring>  
using namespace std;
int main(){
	int  prime[2004] = { 0 };
	char str[2004];
	int size[256];
	prime[0] = prime[1] = 1;
	for (int i = 2; i < 2001; ++i)
	if (!prime[i])
	for (int j = i * 2; j < 2001; j += i)
		prime[j] = 1;

	int T;
	while (cin >> T)
	for (int t = 1; t <= T; ++t) {
		cin >> str;

		memset(size, 0, sizeof(size));
		for (int i = 0; str[i]; ++i)
			size[str[i]] ++;

		cout << "Case " << t << ": ";
		int number = 0;
		for (int i = 0; i < 256; ++i)
			if (!prime[size[i]])
		if (i >= '0' && i <= '9'|| i >= 'A' && i <= 'Z'|| i >= 'a' && i <= 'z') {
			cout << (char)i;
			number++;
		}

		if (!number) cout << "empty";
		cout << endl;
	}
	return 0;
}
