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
  int N, M, a; //N:�ζüƺt��k�s�y���I�ƶq a:����Ϊ���� M:���X���I�b�׽u�d�� 
  Point p, A, B, C, D;
  while( scanf( "%d%d", &N, &a ) != EOF && N ){
    M = 0;
    A.x = 0, A.y = 0; //�H�|�Ө�����ߵe�X�b�� 
    B.x = a, B.y = 0;
    C.x = a, C.y = a;
    D.x = 0, D.y = a;
    for( int i = 0 ; i < N ; i++ ){
      scanf( "%lf%lf", &p.x, &p.y );  //��J���� 
      if( distance2( p, A ) <= (double)(a*a) &&   //�p���I�Z���|���I���Z���O�_���ba�H��
          distance2( p, B ) <= (double)(a*a) && 
          distance2( p, C ) <= (double)(a*a) && 
          distance2( p, D ) <= (double)(a*a) )
        M++;  //�p�G�b�p���[�@ 
    }
    printf( "%.5lf\n", ((double)M/(double)N)*(double)a*(double)a );  //�D�ص�������   
  }
  return 0;
}
