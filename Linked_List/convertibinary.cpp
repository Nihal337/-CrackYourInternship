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
    int getDecimalValue(ListNode* head) {
     
        int i = -1,ans = 0;
        if(head->next==NULL) return head->val ;
        ListNode* temp = head ;
        while(temp != NULL) {
            i++ ;
            temp = temp->next ;
        }
        temp = head ;
        while(temp != NULL) {
        
            
             ans  += temp->val<<i ;
             temp = temp->next ;
              i-- ;
        }
        return ans ;
    }
};
