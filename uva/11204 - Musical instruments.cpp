#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int m,n;
        cin>>m>>n;
        int arr[100]={0};
        for(int i=0;i<n;i++){
            int temp;
            for(int j=0;j<m;j++){
                cin>>temp;
                if(temp==1) 
					arr[j]++; //�p�⦳�X�ӤH���j���־��Ʀb�Ĥ@���@ 
            }
        }
        int ans=1;
        for(int i=0;i<m;i++){
            if(arr[i])
				ans*=arr[i]; //�p��ƦC�զX 
        }
        cout<<ans<<endl;
    }
    return 0;
}
