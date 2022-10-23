#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T;
    long long trin[3];
    cin>>T;
    for(int Case=1;Case<=T;Case++){
        cin>>trin[0]>>trin[1]>>trin[2];
        sort(trin,trin+3);
        cout<<"Case "<<Case<<": ";
        if(trin[0]<=0){
            cout<<"Invalid\n";
        } 
		else if(trin[0]==trin[2]){
            cout<<"Equilateral\n";
        } 
		else if(trin[0]==trin[1] || trin[1]==trin[2]){
            cout<<"Isosceles\n";
        } 
		else{
            if(trin[0]+trin[1]>trin[2]) 
				cout<<"Scalene\n";
            else 
				cout<<"Invalid\n";
        }
    }
    return 0;
}
