#include<iostream>
using namespace std;
int uniquePaths(int m, int n) {
        int dp[110][110];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            	if(i==0 || j==0){
            		dp[i][j]=1;
				}
				else{
					dp[i-1][j-1]=dp[i-1][j]+dp[i][j-1];	
				}
            }
        }
        return dp[m-1][n-1];
    }

int main(){
	int m=3,n=7;
	cout<<uniquePaths(m,n);
} 
