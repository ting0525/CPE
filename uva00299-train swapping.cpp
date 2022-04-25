#include <iostream>
using namespace std;
int main(){
    int n,train;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>train;
        int swap=0,T[train];
        for(int j=0;j<train;j++){
            cin>>T[j];
        }
        for(int j=0;j<train-1;j++){
            for(int k=j+1;k<train;k++){
                if(T[j]>T[k]){
                    int tmp=T[j];
                    T[j]=T[k];
                    T[k]=tmp;
                    swap++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<swap<<" swaps."<<endl;
    }
    return 0;
}

