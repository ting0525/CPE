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
    vector<int> sum_set;
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        dfs(root, sum);
        sum = 0;
        for(int i = 0; i < sum_set.size(); i++){
            sum += sum_set[i];
        }
        return sum;
    }
    void dfs(TreeNode* root, int sum){
        if(!root) return ;
        if(!root->left && !root->right){
            sum = sum*10 + root->val;
            sum_set.emplace_back(sum);
            return ;
        } 
        sum = sum*10 + root->val; 
        dfs(root->left, sum);
        dfs(root->right, sum);
        return ;
    }
};
