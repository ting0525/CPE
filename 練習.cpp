#include<iostream>
using namespace std;
int main(){
	int sum=101,tmp=0,ans=0;
	int i=0;
    while(sum!=0){
        tmp=sum%10;
        sum=sum/10;
        ans=ans+(tmp<<i);
        i++;
        cout<<"ans="<<ans<<endl; 
    }
    cout<<ans;
	
	/*for(int i=0;i<5;i++){
		cout<<(1<<i)<<endl;
	} */
	
} 
