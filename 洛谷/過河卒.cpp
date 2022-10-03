#include <iostream>
using namespace std;
int xx[9]={0,-2,-1,1,2,2,1,-1,-2};  //馬相對位置可以控制到的x點 
int yy[9]={0,1,2,2,1,-1,-2,-2,-1};  //馬相對位置可以控制到的點y 
long long int f[25][25];            //卒 
int mark[25][25];                   //加上xx yy後 == 馬可以控制到的絕對位置 
int main(){
  	int m,n,x,y;
  	cin>>m>>n>>x>>y;	 	
	for(int i=0;i<9;i++){            //把相對位置轉成絕對位置 
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

