#include <iostream>
#include <string>
#include <stack>
using namespace std;
int convert(string num,int r){  // 先轉成10進制 
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
		else if(s.top() >=10)  //16進制的處理 
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
	int n=convert(num,before);//先r1->10
	work(n,after);//再10->r2 
	cout<<"(base-"<<after<<")";
	return 0;
}
