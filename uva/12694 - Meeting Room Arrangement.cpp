#include<bits/stdc++.h>
using namespace std;

struct schedul{
	int start, end;
};

bool cmp(schedul a, schedul b){
	return a.end < b.end;
} 

int main(){
	int n, s, e;
	cin >> n;
	while(n--){
		schedul times[25];
		int index = 0;
		while(cin >> s >> e && (s || e)){
			times[index].start = s;
			times[index].end = e;
			index++;			
		} 
		sort(times, times+index, cmp);
		int count = 1, now_end = times[0].end;
		for(int i = 1; i < index; i++){
			if(now_end <= times[i].start){
				count++;
				now_end = times[i].end;
			}
		}
		cout << count << endl;
		
	}
	
	
	
	
	
	
	
	
} 
