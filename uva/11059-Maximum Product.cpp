#include <iostream>
using namespace std;
int main() {
	int t,Case=1;
    while(cin>>t){
    	int arr[1000];
        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<t;i++){    //�ɤO��k ��C�إi�ೣ���L 
            int sum=1;
            for(int j=i;j<t;j++){
                sum*=arr[j];
                ans=max(ans,sum);
            }
        }
        Case++;
        cout << "Case #" << Case << ": The maximum product is " << ans << ".\n\n";
    }
}
