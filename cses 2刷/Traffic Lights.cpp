#include<bits/stdc++.h>
using namespace std;

multiset<int> light_set;
multiset<int> dis;

int main(){
	ios::sync_with_stdio(0), cin.tie(0); 
	int road, light, this_light;
	cin >> road >> light;
	light_set.insert(0); //0 ~ road
	light_set.insert(road);
	dis.insert(road);
	
	for(int i = 0; i < light; i++){
		cin >> this_light;
		auto iter = light_set.upper_bound(this_light);
		auto find = dis.find((*iter) - (*--iter)); //§ä¥X¶ZÂ÷ 
		dis.erase(find); //§R±¼ÂÂªº
		dis.insert(this_light - *iter); 
		dis.insert(*++iter - this_light);
		cout << *--dis.end() << " ";
		light_set.insert(this_light);
	}
	
}
