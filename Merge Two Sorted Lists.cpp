/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    	if(NULL == l1) return l2;
        if(NULL == l2) return l1;
        ListNode* head=NULL;
        if(l1->val<l2->val){    //決定開頭 
            head=l1;
            l1=l1->next;
        }
        else{
            head=l2;
            l2=l2->next;
        }
        ListNode* p;
        p=head;
        while(l1!=NULL&&l2!=NULL){     //中間的串接 
            if(l1->val<l2->val){
                p->next=l1;
                l1=l1->next;
            }
            else{
                p->next=l2;
                l2=l2->next;
            }
            p=p->next;
        }
        if(l1!=NULL){              //尾巴的串接 (有可能兩條鏈結長短不一樣 入一條NULL剩下的就可以直接串完 
            p->next=l1;
        }
        else{
            p->next=l2;
        }
        return head;
    }
};
