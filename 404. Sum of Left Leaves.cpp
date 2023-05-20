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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
    void dfs(TreeNode* root, bool isleft){
        if(!root->left && !root->right && isleft == 1){
            sum += root->val;
            return ;
        }
        else if(!root->left && !root->right && isleft == 0) return ;
        if(root->left) dfs(root->left, 1);
        if(root->right) dfs(root->right, 0);
    }
};
