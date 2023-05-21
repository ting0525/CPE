/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int, int> mp;
    vector<int> ans;
    vector<int> findMode(TreeNode* root) {
        int count = 0;
        dfs(root, count);
        for(auto i : mp){
            if(i.second == count){
                ans.emplace_back(i.first);
            }
        }
        return ans;
    }
    void dfs(TreeNode* root, int& count){
        if(!root) return ;
        mp[root->val]++;
        count = max(mp[root->val], count);
        dfs(root->left, count);
        dfs(root->right, count);      
    }
};
