#include<bits/stdc++.h>
using namespace std;

int main(){
	char dir_list[5] = {'N', 'E', 'S', 'W'};
	int row, col, x, y, index;
	char dir;
	int out[1000][1000] = {0};
	string command = "";
	cin >> row >> col;
	while(cin >> x >> y >> dir){
		bool lost = false;
		bool pass = true;
		//cin >> x >> y >> dir;
		if(dir == 'N') index = 0;
		if(dir == 'E') index = 1;
		if(dir == 'S') index = 2;
		if(dir == 'W') index = 3;
		cin >> command;
		for(int i = 0; i < command.size(); i++){
			if(command[i] == 'F'){
				if(out[x][y] == 1){
					pass = false;
				} 
				else if(dir == 'N'){
					y++;
				}
				else if(dir == 'S'){
					y--;
				}
				else if(dir == 'W'){
					x--;
				}
				else if(dir == 'E'){
					x++;
				}
			}
			
			else if(command[i] == 'L'){
				index--;
				if(index == -1) index = 3;
				else if(index == 4) index = 0;
				dir = dir_list[index];
			}
			else if(command[i] == 'R'){
				index++;
				if(index == -1) index = 3;
				else if(index == 4) index = 0;
				dir = dir_list[index];
			}
			
			if(pass == false){
				if(x == -1){
					x++; 
				} 
				else if(x == row+1){
					x--;
				}
				else if(y == -1){
					y++;
				}
				else if(y == col+1){
					y--;
				}
			}
			//¥X¬É§PÂ_ 
			if(x == -1 || x == row+1 || y == -1 || y == col+1){
				if(x == -1){
					x++;
				}
				else if(x == row+1){
					x--;
				}
				else if(y == -1){
					y++;
				}
				else if(y == col+1){
					y--;
				}	
				lost = true;
				out[x][y] = 1;
				break;
			}
			
			
		}
		printf("%d %d %c", x, y, dir);
		if(lost) cout << " LOST\n";
		else cout << endl;
	}	
	
} 
