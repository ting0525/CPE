#include<iostream>
using namespace std;
int main(){
	double site[1000][4];   //[�ĴX������][�y��] 
	int Case=0;
	char work;  //�P�_�O "r" �� "*" 
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
	int cnt=1;  //��X���궵�� 
	while(cin>>x>>y){
		bool isfind=false;  //�O�_����� 
		if(x==9999.9 && y==9999.9){   //�������� 
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




