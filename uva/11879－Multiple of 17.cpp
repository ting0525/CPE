#include<iostream>
#include<cstdio>
using namespace std;

int main(){  //¤j¼Æ¹Bºâ 
	string num;
  	int s;
  	while( getline( cin, num ) && num != "0" ){
    	s = 0;
    	for( int i = 0 ; i < num.length() ; i++ ){
      	s = s*10 + num[i] - '0';
      	s %= 17;
    	}
    	if( !s ) 
			printf("1\n");
    	else 
			printf( "0\n" ); 
  	}
  	return 0;
}
