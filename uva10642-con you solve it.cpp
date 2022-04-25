#include<iostream>
using namespace std;
int func(int x,int y){
	return ((x+y)*(x+y+1)/2)+x;
}
int main(){
	int a;
	int x1,x2,y1,y2;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>x1>>y1>>x2>>y2;
		printf("Case %d: %d\n" , i+1 ,func(x2,y2)-func(x1,y1));
	}
	return 0;
}
