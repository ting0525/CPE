#include<bits/stdc++.h>
using namespace std;

int get_number(string str, int start, int end){
	int value = 0;
	for(int i = start; i <= end; ++ i) {
		value = value*10 + str[i]-'0';
	}
	return value;
}

int  days_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int  zodiac_bound[13] = {0, 21, 20, 21, 21, 22, 22, 23, 22, 24, 24, 23, 23};
char zodiac_name[13][13] = {
	"capricorn", "aquarius", "pisces", "aries", "taurus", "gemini", "cancer", 
	"leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn"};

int main(){
	int  n;
	string str;
	while(cin >> n) 
	for (int i = 1; i <= n; ++ i) {
		cin >> str;
		int month = get_number(str, 0, 1);
		int day = get_number(str, 2, 3);
		int year = get_number(str, 4, 7);
		
		// leap year
		if((year%4 == 0 && year%100 || year%400 == 0)){
			days_of_month[2] = 29;	
		}
		
		
		day += 280;
		while(day > days_of_month[month]){
			day -= days_of_month[month];
			month ++;
			// int next year
			if(month > 12){
				month = 1;
				year ++;
				// leap year
				if((year%4 == 0 && year%100 || year%400 == 0)){
					days_of_month[2] = 29;	
				}
			}
		}
		
		
		printf("%d %02d/%02d/%04d ", i, month, day, year);
		if(day < zodiac_bound[month]){
			cout << zodiac_name[month-1] << endl;
		}
		else{
			cout << zodiac_name[month] << endl;
		}
	}
	
	return 0;
}
