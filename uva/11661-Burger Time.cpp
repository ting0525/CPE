#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    string road;
    while(cin>>t){
        if(t==0) break;
        cin>>road;
        int R=-1,D=-1;
        int Min=1000000;
        for(int i=0;i<t;i++){
            if(road[i]=='Z'){
                Min=0;
                break;
            } 
			else if(road[i]=='R'){
                if(D>=0){
                    Min=min(Min,i-D);
                }
                R=i;
            } 
			else if(road[i]=='D'){
                if (R>=0){
                    Min=min(Min,i-R);
                }
                D=i;
            }
        }
        cout<<Min<<endl;
    }
    return 0;
}
