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
    TreeNode* ans; //������� 
    void targetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target){ //���jdfs 
        if( original == NULL)  //��������(���쩳�S���) 
            return;
        if( original == target){ //��������(���) 
            ans = cloned;  //��`�I��m�ǵ��������(call by value) 
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

