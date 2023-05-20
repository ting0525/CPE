#include <iostream>
#include <math.h>
using namespace std;

int x[12 + 1];
int ans = 0, N;
bool place(int t) {
	for (int i = 1; i < t; i++) 
		if (t - i == abs(x[t] - x[i])) 
			return 0;
	return 1;
}
void dfs(int t) {
	if (t > N) {
		ans++;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++)
			    cout << (j == x[i] ? 'Q':'x');
			cout << "\n";
		}
		cout << "\n";
	}
	else {
		for (int i = t; i <= N; i++) {
			swap(x[t], x[i]);
			if (place(t)) dfs(t + 1);
			swap(x[t], x[i]);
		}
	}
}
int main() {
    cin >> N;
	ans = 0;
	for (int i = 1; i <= N; i++) x[i] = i;
	dfs(1);
	cout << ans << "\n";
	return 0;
}//8queens 92 16queens 14772512
