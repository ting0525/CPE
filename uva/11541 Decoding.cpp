#include<iostream>
#include<cstring> 
using namespace std;
 
int main(){
    int x;  //����� 
    string str; //�ؼЦr�� 
    cin>>x;
    for(int Case= 1;Case<=x;Case++){
        cin>>str;
        cout<<"Case "<<Case<<": ";
        char ch=' '; //�_���e���@�ӪŮ� �Υ��Ӱ���X 
        int num=0;
        for(int i = 0;i<str.size();i++){
            if (isalpha(str[i])){  //�P�_�O�_�O�j�g�r�� 
                for(int j=0;j<num;j++)
                    cout<<ch;
                ch=str[i];  //�p�G�O�N�s�_�� 
                num=0;  //��X���⥴�L�����k�s 
            } 
			else{  //�p�G�O�Ʀr�N�ର��� 
                num*=10;
                num+=str[i]-'0';
            }
        }
        while(num--) //�̫�@�� 
			cout<<ch;
        cout<<endl;
    }
    return 0;
}
