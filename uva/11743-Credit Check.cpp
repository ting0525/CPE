#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int ans,ans1=0,ans2=0;
        for(int i=0;i<4;i++){  //�C��������|�� 
            cin>>ans;
            for(int j=3;j>=0;j--){ //�C�ե|�Ӧr 
                if(j%2){           //���_�� 
                    ans2+=ans%10;
                } 
				else{
                    int x=2*(ans%10);
                    ans1+=(x/10)+(x%10);
                }
                ans/=10;
            }
        }
        if((ans1+ans2)%10) 
			cout<<"Invalid\n";
        else
			cout<<"Valid\n";
    }
    return 0;
}
