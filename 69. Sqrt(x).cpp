#include<iostream>
using namespace std;
int mySqrt(int x){
	if(x==0)return 0;
	if(x==1)return 1;
    double l=0,r=x,temp;
    while((int)r==(int)l){
        temp=(r+l)/2;
        if(temp*temp>x){
            r=temp; 
			cout<<"r:"<<r<<endl;          
        }
        else if(temp*temp<x){
            l=temp;           
        	cout<<"l:"<<l<<endl;
		}
        else{
        	cout<<"temp1:"<<temp<<endl;
            return temp;
        }
    }
    cout<<"r:"<<r<<endl;
    cout<<"l:"<<l<<endl;
    cout<<"temp2:"<<temp<<endl;
    return (int)temp;
}
int main(){
	int x=8;
	cout<<"ans:"<<mySqrt(x);
} 
