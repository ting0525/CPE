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
    vector<int> ans;
    int depth[1000] = {0};

    vector<int> rightSideView(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
    
    void dfs(TreeNode* root, int dep) {
        if (!root) return;    
        if (depth[dep] == 0) {
            ans.emplace_back(root->val);
            depth[dep] = 1;
        }
        dep++;
        dfs(root->right, dep);
        dfs(root->left, dep);
        
    }
};
