#include <iostream>
#include <vector>
using namespace std;
void DFS(int n,vector<int> node[],bool visited[]){
    visited[n]=true;
    for(int i=0;i<node[n].size();i++){
        if(visited[node[n][i]]==false){
            DFS(node[n][i],node,visited);
        }
    }
}

int main(){
    int n;
    scanf("%d%*c%*c",&n);  //吸收換行 
    for(int i=0;i<n;i++){
        char head,s[1000];
        vector<int> node[26];
       
        scanf("%c",&head); //吸收換行 
        
        while(gets(s)!= NULL){
            if(s[0]=='\0')
                break;
         
            node[s[0]-'A'].push_back(s[1]-'A');
            node[s[1]-'A'].push_back(s[0]-'A');
        }
        bool visited[26]={false};
        int count=0;
       
        for(int j=0;j<=head-'A';j++){ 
            if(visited[j]==false){
                DFS(j,node,visited);
                
                count++;
            }
        }
        cout<<count<<endl;
        if(i!=n-1){
            cout<<endl;
        }
       
    }
    return 0;   
}
