#include<iostream>
using namespace std;  //(1+2+3)%3==0 (4+5+6)%3==0 (7+8+9)%3==0 ... 
int main(){           //�����T�a����  ��L��Ӫ��l�ƦX�_�Ӭ�3  
    int T,x;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>x;
        if(x%3==1) 
			cout<<"NO"<<endl;
        else 
			cout<<"YES"<<endl;
    }
    return 0;
}
