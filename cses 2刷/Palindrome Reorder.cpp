#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, str;
    cin >> s;

    int data[30] = {0}, isOdd = 0, whoIsOdd = -1;

    for(int i = 0; i < s.size(); i++){
        data[s[i]-'A'] += 1;
    }

    for(int i=0; i<26; i++){
        if((data[i]%2)){
            isOdd++;
            whoIsOdd = i;
        }
        if(isOdd > 1){
            cout << "NO SOLUTION" << "\n";
            return 0;
        }
    }

    for(int i=0; i<26; i++){
        str += string(data[i] / 2, 'A' + i);
    }

    if(whoIsOdd != -1){
        str += string(1, 'A' + whoIsOdd);
    }

    for(int i = 26;i >= 0; i--){
        str += string(data[i]/2, 'A' + i);
    }

    cout << str << endl;

    return 0;
}

