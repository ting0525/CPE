#include<iostream>
using namespace std;
int main(){
	double site[1000][4];   //[第幾筆測資][座標] 
	int Case=0;
	char work;  //判斷是 "r" 或 "*" 
	while(cin>>work){
		if(work=='*'){
			break;
		}
		else if(work=='r'){
			cin>>site[Case][0]>>site[Case][1]>>site[Case][2]>>site[Case][3];
			Case++;
		}
	}
	double x,y;
	int cnt=1;  //輸出測資項數 
	while(cin>>x>>y){
		bool isfind=false;  //是否有找到 
		if(x==9999.9 && y==9999.9){   //結束條件 
			break;
		}
		for(int i=0;i<=Case;i++){
			if(x>site[i][0]&&x<site[i][2]){
				if(y<site[i][1]&&y>site[i][3]){
					printf("Point %d is contained in figure %d\n",cnt,i+1);
					isfind=true;
				}
			}
		} 
		if(isfind==false){
			printf("Point %d is not contained in any figure\n",cnt);
		}
		cnt++;
	}


} 




