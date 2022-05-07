/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public: 
    // TC : O(N+M)  Sc : O(1)
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     
        ListNode* h1 = headA  ;
        ListNode* h2 = headB ;
     
        while(true) {
            
            if(h1==h2) return h1 ;
            if(h1==NULL) h1 = headB ;
            else  h1 = h1->next ;
            if(h2==NULL) h2 = headA ;
            else   h2 = h2->next ;
            
           
        }
    }
};
