#include<iostream>
#include<cstdio>
#include<cmath>
#define PI (2.0*acos(0.0))
using namespace std;

int main(){
  double a;
  while( scanf( "%lf", &a ) != EOF ){
    double x, y, z;
    z = a*a - a*a*PI/4.0;
    z -= a*a*PI/4.0 - a*a*PI/6.0 - ( a*a*PI/6.0 - a*a*sqrt(3.0)/4.0 );
    y = a*a - a*a*PI/4.0 - 2.0*z;
    x = a*a - 4.0*y - 4.0*z;
    printf( "%.3lf %.3lf %.3lf\n", x, 4*y, 4*z );
  }
  return 0;
}
//https://www.youtube.com/watch?v=kScE1GUmkfQ 
