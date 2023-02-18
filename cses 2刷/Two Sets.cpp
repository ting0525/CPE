#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin >> n;
    if(n%4 == 1 || n%4 == 2) cout << "NO\n";
    else if(n%4 == 3){
        cout << "YES\n";
        cout << n/2 << endl;
        for(int i = 2; i <= n/2; i += 2){ 
            printf("%d %d " , i , n-i);
        } 
        printf("%d\n%d\n" , n , n/2+1);
        for(int i = 1; i <= n/2; i += 2)
            printf("%d %d " , i , n-i);
    } 
	else{
        cout << "YES\n";
        cout << n/2 << endl;
        for(int i = 2; i <= n/2; i += 2){
        	printf("%d %d ", i , n-i+1);	
		}
        printf("\n%d\n", n/2);
        for(int i = 1; i <= n/2; i += 2)
            printf("%d %d ", i , n-i+1);
    }
}
