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
    void flatten(TreeNode *root) {
        if(!root) return;
        if(!root->left && !root->right) return;
        if(root->left) flatten(root->left);
        if(root->right) flatten(root->right);
        TreeNode* rtree = root->right;
        root->right = root->left;
        root->left = NULL;
        TreeNode* find_origin_left_leaf = root;
        while(find_origin_left_leaf->right) find_origin_left_leaf = find_origin_left_leaf->right;
        find_origin_left_leaf->right = rtree; 
    }
};
