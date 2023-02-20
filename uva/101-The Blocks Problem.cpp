#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> position[30];

//找出目標位置及高度 
void find_block(int first, int &position_x, int &high_x){
	for(position_x = 0; position_x < n; position_x++){
		for(high_x = 0; high_x < position[position_x].size(); high_x++){
			if(position[position_x][high_x] == first) return;
		}
	}
}
//把目標上層(h+1)的 block 放回原位 
void clear_above(int position_x, int high_x){
	for(int i = high_x+1; i < position[position_x].size(); i++){
		int tmp = position[position_x][i];
		position[tmp].push_back(tmp);
	}
	position[position_x].resize(high_x+1);
}

void move_block(int start, int high, int end){
	for(int i = high; i < position[start].size(); i++){
		position[end].push_back(position[start][i]);
	}
	position[start].resize(high);
}
int main(){
	int a, b;
	
	while(cin >> n){
		string operate, type;
		memset(position, 0, sizeof(position));
		for(int i = 0; i < n; i++){
			position[i].push_back(i);
		}
		while(cin >> operate){
			if(operate == "quit") break;
			cin >> a >> type >> b;
			int position_a, position_b, high_a, high_b;
			find_block(a, position_a, high_a);
			find_block(b, position_b, high_b);
		
			//ab在同一格 
			if(position_a == position_b) continue;
		
			if(operate == "move") clear_above(position_a, high_a); 
	
			if(type == "onto") clear_above(position_b, high_b);
		
			move_block(position_a, high_a, position_b);
		}
		for(int i = 0; i < n; i++){
			cout << i << ":";
			for(int j = 0; j < position[i].size(); j++){
				cout << " " << position[i][j]; 
			}
			cout << endl;
		}	
	}
	return 0;
} 
