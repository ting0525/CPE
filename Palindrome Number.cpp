#include <iostream>  
using namespace std;  
int main(){                
    long long int units_digit,result=0,x;
    cin>>x;
    int tmp = x;
    while(x>0){
        units_digit=x%10;
        result=(result*10)+units_digit;
        x=x/10;
    }
	if(tmp==result)
		cout<<"true";
	else
		cout<<"false";    	
} 
