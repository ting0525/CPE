#include <iostream>
#include <string>
#include <stack>
using namespace std;
int convert(string num,int r){  // ���ন10�i�� 
	int n=0,s=1;
	int len=num.length();
	for(int i=len-1;i>=0;i--){
    
		if(num[i]<='F'&&num[i]>='A'){
			n+=(num[i]-'A'+10)*s;
			s*=r;
		}
        
		else{
			n+=(num[i]-'0')*s;
			s*=r;
		}
	}
	return n;
}

void output(stack<int> s){
	while(!s.empty() ){
		if(s.top() <10)
			cout<<s.top() ;
		else if(s.top() >=10)  //16�i��B�z 
		   cout<<(char)(s.top() +'A'-10);
		s.pop() ;
	}
	
}

void work(int n,int r){
	stack<int> s;
	while(n>0){
		s.push(n%r);
		n/=r;
	}
	output(s);
}
int main(){
	int before,after;
	string num;
	cin>>before;
	cin>>num;
	cin>>after;
	cout<<num<<"=";
	int n=convert(num,before);//��r1->10
	work(n,after);//�A10->r2 
	cout<<"(base-"<<after<<")";
	return 0;
}
