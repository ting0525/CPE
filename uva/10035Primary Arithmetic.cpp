#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	while(cin>>num1>>num2 && (num1!=0 || num2!=0)){
		int carry=0,tmp=0;
		while(num1>0 || num2>0){
			if(num1%10+num2%10+tmp>=10){
				tmp=1;
				carry++;
			}
			else{
				tmp=0;
			}
			num1/=10;
			num2/=10;
		}
		if(carry==0){
				cout<<"No carry operation.\n";
		}
		else if(carry==1){
			cout<<"1 carry operation.\n";
		}
		else{
			printf("%d carry operations.\n" , carry);
		}
	} 
} 
