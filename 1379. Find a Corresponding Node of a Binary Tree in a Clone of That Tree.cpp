/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans; //全域指標 
    void targetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){ //遞迴dfs 
        if( original == NULL)  //結束條件(走到底沒找到) 
            return;
        if( original == target){ //結束條件(找到) 
            ans = cloned;  //把節點位置傳給全域指標(call by value) 
            return;
        }
        targetCopy( original->left,cloned->left, target);
        targetCopy( original->right,cloned->right, target);
    }   
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if( original == NULL)
            return NULL;
        
        targetCopy( original, cloned, target);
    return ans;        
    }
};
Console

