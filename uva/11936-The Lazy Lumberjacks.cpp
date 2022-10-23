#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int N;
  int tri[3];
  while( scanf( "%d", &N ) != EOF ){
    for( int i = 0 ; i < N ; i++ ){
      scanf( "%d%d%d", &tri[0], &tri[1], &tri[2] );
      if( tri[0]+tri[1] > tri[2] &&
          tri[1]+tri[2] > tri[0] &&
          tri[0]+tri[2] > tri[1] ) 
        printf( "OK\n" );
      else printf( "Wrong!!\n" );
    }
  }
  return 0;
}
