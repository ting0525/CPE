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
     ListNode* deleteMiddle(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        if (head -> next == NULL)   //link長度為 0 or 1 
            return NULL;
        if (head -> next ->next == NULL) {     
            head->next = NULL;
            return head;
        }
        ListNode *tmp = second;  
        while (first != NULL && first-> next != NULL) {  //first最後會指向link最後一個 second會指向中間 tmp會指向second前一個 
            tmp = second;
            first = first -> next -> next;
            second = second -> next;
        }
        if (second -> next != NULL)  
            tmp->next=tmp->next->next;  //跳過second(正中間的node) 
        return head;
    } 
};

