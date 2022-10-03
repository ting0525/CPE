class Solution {
public:
        TreeNode* invertTree(TreeNode* root) {
		// base condition to terminate the recursive operations
        if(!root) return root;
		
		// swapping the left and right subtrees
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
		
		// recursively operating the same on left and right subtree
        invertTree(root->left);
        invertTree(root->right);
		
        return root;
    }
};
