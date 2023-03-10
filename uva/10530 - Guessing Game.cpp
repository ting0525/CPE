#include<bits/stdc++.h> 
using namespace std;

int main() {
	int guess, lowerBound, upperbound;
	string result;
	bool honest;
	while (cin >> guess >> ws && guess) {
		lowerBound = 1, upperbound = 10, honest = true;
		do {
			getline(cin, result);
			if (result == "right on") {
				if (lowerBound > 10 || upperbound < 1 || lowerBound > upperbound || guess < lowerBound || guess > upperbound)
					honest = false;
				break;
			}
			else if (result == "too high") 
				upperbound = min(upperbound, guess - 1);
			else 
				lowerBound = max(lowerBound, guess + 1);
		} while (cin >> guess >> ws);
		cout << (honest ? "Stan may be honest\n" : "Stan is dishonest\n");
	}
}
