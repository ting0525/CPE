#include<iostream>
#include<vector>
using namespace std;
int main(){
    int peo,back,tmp;
    while(cin>>peo>>back){
        vector<int> v(peo+1,0);   //陣列大小要注意記得+1 support peo=5 下面輸入最大數字可能就是5 但你的陣列只有0~4號 
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
