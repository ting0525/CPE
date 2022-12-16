#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	string baseone_num_part;
	string basetwo_num = "";
	int num;
	char flag;
	while( cin >> baseone_num_part && baseone_num_part != "~"){
		if( baseone_num_part == "#" ){                               //結束符號出現後開始將字串轉10進位 
			num = 0;
			for( int i = 0 ; i < basetwo_num.length() ; i++ ){
				num<<=1;
				if( basetwo_num[i] == '1' ) 
					num += 1;
			}
			basetwo_num = "";
			printf( "%d\n", num );
		}
		//讀取字串 
		else if( baseone_num_part.length() == 1 )  //0的狀況 
			flag = '1';
		else if( baseone_num_part.length() == 2 )  //00的狀況 
			flag = '0';
		else
			for( int i = 0 ; i < baseone_num_part.length()-2 ; i++ )  //0的數量大於2的狀況 
				basetwo_num += flag;
	}
	return 0;
}
