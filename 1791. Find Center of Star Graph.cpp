//set�G���X�A�h�����ƪ������A��ƥѤp��j�ƧǡC
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
