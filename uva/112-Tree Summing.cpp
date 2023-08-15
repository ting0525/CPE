#include<bits/stdc++.h>
using namespace std;

char symbol(){
	char x; 
	x = cin.get();
	while(x == ' ' || x == '\n'){
		x = cin.get();
	}
	return x;
}

int dfs(int goal_num, int *is_leaf){
	char sym;
	int value;
	int ans = 0, left = 0, right = 0;
	scanf("%d" , &value);
	sym = symbol();
	if(sym == '('){
		if(dfs(goal_num-value, &left)) ans = 1;
		sym = symbol();
		if(dfs(goal_num-value, &right)) ans = 1;
		sym = symbol();
		if(left && right) ans = (goal_num == value);	
	}
	else *is_leaf = 1;
	return ans;
	
}

int main(){
	int goal_num, is_leaf;
	while(cin >> goal_num){
		symbol();
		if(dfs(goal_num, &is_leaf)) cout << "yes\n";
		else cout << "no\n";		
	}
	return 0;
}
