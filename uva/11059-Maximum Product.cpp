#include <iostream>
using namespace std;
int main() {
	int t,Case=1;
    while(cin>>t){
    	long long int arr[1000];
        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
        long long int ans=0;
        for(int i=0;i<t;i++){    //暴力算法 把每種可能都輪過 
            long long int sum=1;
            for(int j=i;j<t;j++){
                sum*=arr[j];
                ans=max(ans,sum);
            }
        }
        
        cout << "Case #" << Case++ << ": The maximum product is " << ans << ".\n\n";
    }
}
