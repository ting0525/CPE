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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode preHead(0), *p = &preHead;
    int carry = 0;
    int num=0;
    while (l1!=NULL || l2!=NULL || carry) {
        if(l1!=NULL&&l2!=NULL) num=(l1->val+l2->val+carry);
        else if(l1!=NULL&&l2==NULL) num=(l1->val+carry);
        else if(l1==NULL&&l2!=NULL) num=(l2->val+carry);
        else num=carry;
        carry=num/10;
        p->next=new ListNode;
        p=p->next;
        p->val=num%10;
            
        if(l1!=NULL) l1=l1->next;
        if(l2!=NULL) l2=l2->next;
    }
    return preHead.next;
}    
};
