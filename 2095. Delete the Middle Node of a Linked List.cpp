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
        if (head -> next == NULL)   //link���׬� 0 or 1 
            return NULL;
        if (head -> next ->next == NULL) {     
            head->next = NULL;
            return head;
        }
        ListNode *tmp = second;  
        while (first != NULL && first-> next != NULL) {  //first�̫�|���Vlink�̫�@�� second�|���V���� tmp�|���Vsecond�e�@�� 
            tmp = second;
            first = first -> next -> next;
            second = second -> next;
        }
        if (second -> next != NULL)  
            tmp->next=tmp->next->next;  //���Lsecond(��������node) 
        return head;
    } 
};

