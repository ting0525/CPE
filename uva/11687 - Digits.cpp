#include<iostream>
#include<cstring>
using namespace std;
int main(){
  string x, last_x, tempstr;
  int n, temp;
  while( getline( cin, x ) ){
    if( x == "END" ) break;
    n = 0;
    do{
      n++;
      last_x = x;  //last_x為上一個x 
      temp = x.length();
      x = "";
      while( temp ){
        tempstr = (char)((temp%10)+(int)'0');
        x += tempstr;
        temp /= 10;
      }
    }while( last_x != x );
    printf( "%d\n", n );
  }
  return 0;
}
