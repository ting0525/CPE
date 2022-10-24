#include<iostream>
#include<cstdio>
using namespace std;

int main(){                       //¶O¤ó¼Æ¦C 
  long long f[85] = { 1, 1 };
  int n;

  for( int i = 2 ; i <= 80 ; i++ )
    f[i] = f[i-1] + f[i-2];
  while( scanf( "%d", &n ) != EOF && n != 0 ){
    printf( "%lld\n", f[n] );
  }
  return 0;
}
