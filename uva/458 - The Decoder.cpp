#include<iostream>
using namespace std;
int swaps(int *x,int *y){
		int tmp=*x;
		*x=*y;
		*y=tmp;
}
int main(){
	int a,b;
	while(cin>>a>>b && (a!=-1||b!=-1)){
		int tmp1=0;
		int tmp2=0;
		if(b>a)
			swaps(&a,&b);
		tmp1=a-b;
		tmp2=100-a+b;
		if(tmp2>tmp1)
			cout<<tmp1<<endl;
		else
			cout<<tmp2<<endl;
	}
	
	
	
} 






