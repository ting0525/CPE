class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        v=push_vec(root);     //接回讀取完tree的vector 
        for(int i=0;i<v.size();i++){  //暴力搜尋 
            for(int j=0;j<v.size();j++){
                if(v[i]+v[j]==k && i!=j)
                    return true;
            }
        }
        return false;

    }
    vector<int> v;  
    vector<int> push_vec(TreeNode* root ){   //tree中序尋訪 
        v.push_back(root->val);
        if(root->left!=NULL)
            push_vec(root->left );
        if(root->right!=NULL)
            push_vec(root->right );
        return v;
    }
};
/*---------------------------------------------方法二-(vector<int>& v)--------------------------------------*/ 
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;               
        push_vec(root , v);           //比上面多傳一個v 下面函式接收vector v的絕對位置 以call address的方式傳值 
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(v[i]+v[j]==k && i!=j)
                    return true;
            }
        }
        return false;

    }

    void push_vec(TreeNode* root , vector<int>& v){     
        v.push_back(root->val);
        if(root->left!=NULL)
            push_vec(root->left , v);
        if(root->right!=NULL)
            push_vec(root->right , v);
    }
};
