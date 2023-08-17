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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int s = que.size();
            double sum = 0.0;
            for(int i = 0; i < s; i++){
                TreeNode* cur = que.front();
                sum += cur->val;
                if(cur->left) que.push(cur->left);
                if(cur->right) que.push(cur->right);
                que.pop();
            }
            ans.push_back(sum/s);
        }
        return ans;
    }
};
