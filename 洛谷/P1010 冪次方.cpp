//觀念:遞迴+二進制 
#include<iostream>
using namespace std;
void search(int x){
	if(x!=0){
		int p=1,q=-1;
		cout<<"2";   //遞回後一定會輸出 2(0) 或 2 或 2(2) 所以這裡先輸出2後面再判斷輸出哪種 
		while(x>=p){
			q++; 
			p*=2;	
		} 
		
		if(q==0 || q==2)
			cout<<"("<<q<<")";
        if(q>=3){
			cout<<"("; 
			search(q);
			cout<<")";
		}
		x-=p/2;
		if(x) {
			cout<<"+";
			search(x);
		}
	}
}
int main(){
	int n;
	cin>>n;
	search(n);
	return 0;
} 

//137 2(2(2)+2+2(0))+2(2+2(0))+2(0)
