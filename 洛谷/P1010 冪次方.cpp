//�[��:���j+�G�i�� 
#include<iostream>
using namespace std;
void search(int x){
	if(x!=0){
		int p=1,q=-1;
		cout<<"2";   //���^��@�w�|��X 2(0) �� 2 �� 2(2) �ҥH�o�̥���X2�᭱�A�P�_��X���� 
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
