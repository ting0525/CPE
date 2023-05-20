class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> visited(n), ans;
        for(auto &i : edges){
            visited[i[1]] = 1;
        }
        for(int i = 0; i < n; i++){
            if(visited[i] == 0) ans.emplace_back(i);
        }
        return ans;
    }
};
