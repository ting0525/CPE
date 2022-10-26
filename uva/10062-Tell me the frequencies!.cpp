#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
    bool flag=false;
    while(getline(cin,str)){
        if(flag){
            printf("\n");
        }
        int count[128]={0};
        flag=true;
        for(int i=0;i<str.size();i++){
            count[str[i]]++;
        }

        for(int i=1;i<=str.size();i++){  
            for(int j=127;j>=0;j--){      
                if(count[j]==i){
                    printf("%d %d\n",j,i);
                }
            }
        }    
    }

    return 0;
}
