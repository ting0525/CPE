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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* pointer = root;
        if(root->val == val) return root;

        while(pointer != NULL){
            if(val < pointer->val) pointer = pointer->left;
            else if(val > pointer->val) pointer = pointer->right;
            else return pointer;
        }
        return NULL;
    }

};

