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
    vector<int> tree;
    void in_order(TreeNode* root){
        if(root->left != NULL) in_order(root->left);
        tree.emplace_back(root->val);
        if(root->right != NULL) in_order(root->right);
        return;
    }

    int minDiffInBST(TreeNode* root){
        int minimum = INT_MAX;
        in_order(root);
        for(int i = 1; i < tree.size(); i++) minimum = min(minimum, tree[i]-tree[i-1]);
        return minimum;
    }
};

