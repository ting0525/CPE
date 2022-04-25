#include<iostream>
using namespace std;
int a(int i){
		static int v=1;
		int t=v;
		v=v+i;
		return t;
	}
int main(){
	int i;
	for(i=1;i<=10;i<<=1){
		cout<<a(i)<<endl;
	}
	
	
}
