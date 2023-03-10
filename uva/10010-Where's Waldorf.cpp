#include<bits/stdc++.h>
using namespace std
char s[60][60];
char word[60];
void f(int m, int n, int len){
    int i, j, k, x, y, cfind;
    for(i = 0; i < m; i ++){
        for(j = 0; j < n; j++)
            if(s[i][j] == word[0]){
            	x = i; y = j; k = 0;
            	while(x > 0 && s[x-1][y] == word[k+1]) { k++; x--; }
            	if(k == len-1) {cout << i+1 << ' ' << j+1 << endl; return;}
            	x = i; y = j; k = 0;
            	while(x < m-1 && s[x+1][y] == word[k+1]) {k++; x++;}
            	if(k == len-1) {cout << i+1 << ' ' << j+1 << endl; return;}
            	x = i; y = j; k = 0;
            	while(y > 0 && s[x][y-1] == word[k+1]) { k++; y--; }
            	if(k == len-1) {cout << i+1 << ' ' << j+1 << endl; return;}
            	x = i; y = j; k = 0;
            	while(y < n-1 && s[x][y+1] == word[k+1]) {k++; y++;}
            	if(k == len-1) {cout << i+1 << ' ' << j+1 << endl; return;}
            	x = i; y = j; k = 0;
            	while(x > 0 && y > 0 && s[x-1][y-1] == word[k+1]) {k++; y--; x--;}
            	if(k == len-1) {cout << i+1 << ' ' << j+1 <<endl; return;}
            	x = i; y = j; k = 0;
            	while(x < m-1 && y < n-1 && s[x+1][y+1] == word[k+1]) {k++; y++; x++;}
            	if(k == len-1)  {cout << i+1 << ' ' << j+1 << endl; return;}
            	x = i; y = j; k = 0;
            	while(x > 0 && y < n-1 && s[x-1][y+1] == word[k+1]) {k++; y++; x--;}
            	if(k == len-1)  {cout << i+1 << ' ' << j+1 << endl; return;}
            	x=i; y=j; k=0;
            	while(x < m-1 && y > 0 && s[x+1][y-1] == word[k+1]) {k++; y--; x++;}
            	if(k == len-1)  {cout << i+1 << ' ' << j+1 << endl; return;}
        	}
    }
}

int main(){
    int t, m, n, k, i, j;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cin >> s[i][j];
                s[i][j] = toupper(s[i][j]);
            }
        }
        cin >> k;
        for(i = 0; i < k; i++){
            cin >> word;
            for(j = 0; word[j] !='\0'; j++)
                word[j] = toupper(word[j]);
            f(m, n, j);
        }
        if(t != 0) cout << endl;
    }

    return 0;
}
