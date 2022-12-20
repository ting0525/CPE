#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    struct node *l, *r;
    node(int val): val(val), r(nullptr), l(nullptr) {}
};

typedef struct node node;
typedef node *link;

link root=nullptr;

void insert_node(int val, link *ptr=&root){
    if(*ptr==nullptr) *ptr = new node(val);
    else if(val > (*ptr)->val) insert_node(val, &((*ptr)->r));
    else insert_node(val, &((*ptr)->l));
}

void traversal(){
    queue<link> q;
    if(root!=nullptr) q.push(root);
    while(!q.empty()){
        link tmp = q.front();
        q.pop();
        if(tmp->l) q.push(tmp->l);
        if(tmp->r) q.push(tmp->r);
        cout << tmp->val << " ";
    }
}

void search_node(int *val, link ptr=root){
    if(ptr == nullptr || *val <= 0) return;
    search_node(val, ptr->l);
    *val -= 1;
    if(*val==0) cout << ptr->val;
    search_node(val, ptr->r);
}

int height(link ptr=root){
    if(ptr == nullptr) return 0;
    return 1 + max(height(ptr->l), height(ptr->r));
}

void delelte_node(int val, link *ptr=&root){
    if((*ptr)==nullptr) cout << "cannot delete" << endl;
    else if((*ptr)->val==val){
        if((*ptr)->l && (*ptr)->r){
            link *new_ptr = &((*ptr)->l);
            while((*new_ptr)->r) new_ptr = &((*new_ptr)->r);
            (*ptr)->val = (*new_ptr)->val;
            (*new_ptr) = (*new_ptr)->l;
        }
        else if((*ptr)->r) (*ptr) = (*ptr)->r;
        else if((*ptr)->l) (*ptr) = (*ptr)->l;
        else (*ptr) = nullptr;
    }
    else if((*ptr)->val>val) delelte_node(val, &((*ptr)->l));
    else if((*ptr)->val<val) delelte_node(val, &((*ptr)->r));
}

int main(){
    string command;
    int val;
    while(cin >> command){
        if(command=="insert"){
            cin >> val;
            insert_node(val);
        }
        else if(command=="traversal"){
            traversal();
            cout << endl;
        }
        else if(command=="search"){
            cin >> val;
            search_node(&val);
            cout << endl;
        }
        else if(command=="height"){
            cout << height() << endl;
        }
        else if(command=="delete"){
            cin >> val;
            delelte_node(val);
        }
    }
    return 0;
}
