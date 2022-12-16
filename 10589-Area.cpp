#include<iostream>
#include<cstdio>
using namespace std;

struct Point{
  double x;
  double y;
};

double distance2( Point p1, Point p2 ){
  return ((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y));
}

int main(){
  int N, M, a; //N:用亂數演算法製造的點數量 a:正方形的邊長 M:有幾個點在斜線範圍內 
  Point p, A, B, C, D;
  while( scanf( "%d%d", &N, &a ) != EOF && N ){
    M = 0;
    A.x = 0, A.y = 0; //以四個角為圓心畫出半圓 
    B.x = a, B.y = 0;
    C.x = a, C.y = a;
    D.x = 0, D.y = a;
    for( int i = 0 ; i < N ; i++ ){
      scanf( "%lf%lf", &p.x, &p.y );  //輸入測資 
      if( distance2( p, A ) <= (double)(a*a) &&   //計算點距離四頂點的距離是否都在a以內
          distance2( p, B ) <= (double)(a*a) && 
          distance2( p, C ) <= (double)(a*a) && 
          distance2( p, D ) <= (double)(a*a) )
        M++;  //如果在計次加一 
    }
    printf( "%.5lf\n", ((double)M/(double)N)*(double)a*(double)a );  //題目給的公式   
  }
  return 0;
}
