#include<bits/stdc++.h>
using namespace std;

vector<int> circularGameLosers(int n, int k){
    int visited[10000] = {0};
    vector<int> ans;
    int now = 1, count = 1;
    while(true){ 
        visited[1] = 1;
        if(k*count >= n){
            int tmp = k*count;
            while(tmp > n) tmp -= n;
            now += tmp;
        }
        else now += k*count;
        if(now > n) now = now-n;
        if(visited[now] == 1) break;
        visited[now] = 1;
        count++;
    }
    for(int i = 1; i <= n; i++){
        if(visited[i] == 0){
        	cout << i << endl;
		} 
	} 
    
}

int main(){
	int n = 5, k = 2;
	circularGameLosers(n, k);
} 
