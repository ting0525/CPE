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
    vector<string> ans;
    vector<string> binaryTreePaths(TreeNode* root) {
        string str = "";
        dfs(root, str);
        return ans;
    }
    void dfs(TreeNode* root, string str){
        if(root == NULL) return;

        str += to_string(root->val) + "->";
        if(!root->left && !root->right){
            str = str.substr(0, str.size()-2);
            ans.emplace_back(str);
        }
        if(root->left) dfs(root->left, str);
        if(root->right) dfs(root->right, str);
    }
};
