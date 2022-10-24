class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,tmp;
        vector<int> v;
        v.push_back(0);
        v.push_back(gain[0]);
        for(int i=1;i<gain.size();i++){
            tmp=v[i]+gain[i];
            v.push_back(tmp);
        }
        for(int i=0;i<v.size();i++){
            ans=max(ans,v[i]);
        }
        return ans;
    }
};
