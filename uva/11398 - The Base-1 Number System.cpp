#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	string baseone_num_part;
	string basetwo_num = "";
	int num;
	char flag;
	while( cin >> baseone_num_part && baseone_num_part != "~"){
		if( baseone_num_part == "#" ){                               //�����Ÿ��X�{��}�l�N�r����10�i�� 
			num = 0;
			for( int i = 0 ; i < basetwo_num.length() ; i++ ){
				num<<=1;
				if( basetwo_num[i] == '1' ) 
					num += 1;
			}
			basetwo_num = "";
			printf( "%d\n", num );
		}
		//Ū���r�� 
		else if( baseone_num_part.length() == 1 )  //0�����p 
			flag = '1';
		else if( baseone_num_part.length() == 2 )  //00�����p 
			flag = '0';
		else
			for( int i = 0 ; i < baseone_num_part.length()-2 ; i++ )  //0���ƶq�j��2�����p 
				basetwo_num += flag;
	}
	return 0;
}
