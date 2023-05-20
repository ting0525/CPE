/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int depth = 0;
    int maxDepth(Node* root) {
        dfs(root, 0);
        return depth;
    }
    void dfs(Node* root, int now_depth){
        if(!root) return ;
        now_depth++;
        depth = max(now_depth, depth);
        for(Node* i : root->children) dfs(i, now_depth);
    }












};
