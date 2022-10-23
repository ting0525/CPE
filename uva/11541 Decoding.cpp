#include<iostream>
#include<cstring> 
using namespace std;
 
int main(){
    int x;  //測資數 
    string str; //目標字串 
    cin>>x;
    for(int Case= 1;Case<=x;Case++){
        cin>>str;
        cout<<"Case "<<Case<<": ";
        char ch=' '; //冒號前有一個空格 用它來做輸出 
        int num=0;
        for(int i = 0;i<str.size();i++){
            if (isalpha(str[i])){  //判斷是否是大寫字母 
                for(int j=0;j<num;j++)
                    cout<<ch;
                ch=str[i];  //如果是就存起來 
                num=0;  //輸出完把打印次數歸零 
            } 
			else{  //如果是數字就轉為整數 
                num*=10;
                num+=str[i]-'0';
            }
        }
        while(num--) //最後一個 
			cout<<ch;
        cout<<endl;
    }
    return 0;
}
