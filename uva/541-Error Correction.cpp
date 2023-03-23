#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	bool table[1000][1000];
	while(cin >> size && size){
		memset(table, 0, sizeof(table));
		for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				cin >> table[i][j];
			}
		}
		
		int row = 0, col = 0;
		int change[5] = {0};
		for(int i = 0; i < size; i++){
			int row_line = 0, col_line = 0; 
			for(int j = 0; j < size; j++){
				if(table[i][j] == 1) row_line++;
				if(table[j][i] == 1) col_line++; 
			}
			if(row_line%2 != 0){
				row++;
				change[0] = i;
			}
			if(col_line%2 != 0){
				col++;
				change[1] = i;
			}
		}
		if(row == 0 && col == 0) printf("OK\n");
		else if(row == 1 && col == 1) printf("Change bit (%d,%d)\n", change[0]+1, change[1]+1);
		else printf("Corrupt\n"); 
	}	
}







