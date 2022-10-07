/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public :
    ListNode *getIntersectionNode(ListNode *headA, ListNode * headB) {
         if (!headA || !headB) return NULL;
         int lenA = getLength(headA), lenB = getLength(headB);   
         //把長度弄成一樣 (把長的變短) 
         if (lenA < lenB) {                                                  
             for ( int i = 0 ; i < lenB - lenA; ++i) headB = headB-> next;
        } else {
             for ( int i = 0 ; i < lenA - lenB; ++i) headA = headA-> next;
        }
        //在長度一樣時比對每個節點 
        while (headA && headB && headA != headB) {
            headA = headA-> next;
            headB = headB-> next;
        }
        return (headA && headB) ? headA : NULL;
    }
    int getLength(ListNode* head) {    //計算長度用的函式 
         int cnt = 0 ;
         while (head) {
             ++ cnt;
            head = head-> next;
        }
        return cnt;
    }
};
