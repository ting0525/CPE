#include<iostream>
#include<vector>
using namespace std;
int main(){
    int peo,back,tmp;
    while(cin>>peo>>back){
        vector<int> v(peo+1,0);   //�}�C�j�p�n�`�N�O�o+1 support peo=5 �U����J�̤j�Ʀr�i��N�O5 ���A���}�C�u��0~4�� 
        for (int i=1;i<=back;i++){
            cin>>tmp;
            v[tmp]++;
        }
        bool flag=true;
        for (int i=1;i<=peo;i++){
            if (v[i]==0) {
                flag=false;
                cout<<i<<" ";
            }
        }
        if(flag) 
			cout<<"*\n";
        else 
			cout<<"\n";
    }
    return 0;
}
