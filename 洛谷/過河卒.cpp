#include <iostream>
using namespace std;
int xx[9]={0,-2,-1,1,2,2,1,-1,-2};  //���۹��m�i�H����쪺x�I 
int yy[9]={0,1,2,2,1,-1,-2,-2,-1};  //���۹��m�i�H����쪺�Iy 
long long int f[25][25];            //�� 
int mark[25][25];                   //�[�Wxx yy�� == ���i�H����쪺�����m 
int main(){
  	int m,n,x,y;
  	cin>>m>>n>>x>>y;	 	
	for(int i=0;i<9;i++){            //��۹��m�ন�����m 
	   mark[xx[i]+x][yy[i]+y]=1;
	} 	
	f[0][0]=0;
  	for(int i=1;i<=m+1;i++){
		for(int j=1;j<=n+1;j++){
		   if(mark[i-1][j-1]==1)
		   		f[i][j]=0;
		   else 
		   		f[i][j]=f[i-1][j]+f[i][j-1];
		}
	}
/*    for(int i=0;i<=m+1;i++){
		for(int j=0;j<=n+1;j++)
	     cout<<f[i][j]<<" ";
	   cout<<endl;
	  }*/
cout<<f[m+1][n+1];
	return 0;
} 

