#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<double, double> &a, pair<double, double> &b){
	if(a.first == b.first) return a.second < b.second;
	else return a.first < b.first;
}

int main(){
    int n;
    double x, y, l, d;
    pair<double, double> p[10010];
    while(cin >> l){
        cin >> d >> n;
        for(int i = 0; i < n; ++i){
            cin >> x >> y;
            p[i].first = x - sqrt(d*d - y*y);
            p[i].second = x + sqrt(d*d - y*y);
        }

        sort(p, p+n, cmp);
        int count = 1;
        double ans = p[0].second;
        for(int i = 0; i < n; i++){ 
            if(p[i].first > ans){
                count++;
                ans = p[i].second;
            }
        } 
        
        cout << count << endl;
    }
}

