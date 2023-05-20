class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = 0;
        for(auto &i : derived) n ^= i;
        return (n == 0);
    }
};
