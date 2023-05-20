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
    vector<vector<int>> ans;
    vector<int> visited;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
    void dfs(TreeNode* root, int targetSum){
        if(!root) return;
        targetSum -= root->val;
        visited.emplace_back(root->val);
        if(!root->left && !root->right){
            if(targetSum == 0) ans.emplace_back(visited);
        }
        else{
            dfs(root->left, targetSum);
            dfs(root->right, targetSum);
        }
        visited.pop_back();
    }
};
