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
    int dfs(TreeNode* root, int targetSum, int sum){
        if(root == NULL) return false;
        if(!root->left && !root->right){
            sum += root->val;
            if(sum == targetSum) return true;
        } 
        return dfs(root->left, targetSum, sum+root->val) || dfs(root->right, targetSum, sum+root->val);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return dfs(root, targetSum, sum);
    }
};
