class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        v=push_vec(root);     //���^Ū����tree��vector 
        for(int i=0;i<v.size();i++){  //�ɤO�j�M 
            for(int j=0;j<v.size();j++){
                if(v[i]+v[j]==k && i!=j)
                    return true;
            }
        }
        return false;

    }
    vector<int> v;  
    vector<int> push_vec(TreeNode* root ){   //tree���ǴM�X 
        v.push_back(root->val);
        if(root->left!=NULL)
            push_vec(root->left );
        if(root->right!=NULL)
            push_vec(root->right );
        return v;
    }
};
/*---------------------------------------------��k�G-(vector<int>& v)--------------------------------------*/ 
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;               
        push_vec(root , v);           //��W���h�Ǥ@��v �U���禡����vector v�������m �Hcall address���覡�ǭ� 
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
