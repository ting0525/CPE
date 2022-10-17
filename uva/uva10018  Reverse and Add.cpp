#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;

int rev(int x){     //反轉 
	string str=to_string(x);
	reverse(str.begin(),str.end());
	x=atoi(str.c_str());
	return x;
}

int main(){
	int cnt;
	int num,num1;
	while(cin>>cnt){
		for(int i=0;i<cnt;i++){
			cin>>num;
			int count=0;
			num1=rev(num);
			do{
        		num+=num1;
        		count++;
        		num1=rev(num);
      		}while(num!=num1);   //比對反轉 
		printf("%d %d\n" , count , num);
		}
	}
} 



