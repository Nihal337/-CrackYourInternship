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
    
    ListNode* middleNode(ListNode* head) {
        int cnt =0 ;
        ListNode* temp = head ;
       ListNode* slow = temp ;
        ListNode* fast  = temp ;
       if(head==NULL) return NULL ;
        if(head->next == NULL) return head ;
        
        while(fast != NULL  and fast->next != NULL ) {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        
        return slow ;
        
    }
};
