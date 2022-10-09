//set：集合，去除重複的元素，資料由小到大排序。
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        set<int> vis;
        for(vector i:edges){
            for(int j:i){
                if(!vis.count(j)) vis.insert(j);
                else return j;
            }
        }
        return 0;
    }
}; 
