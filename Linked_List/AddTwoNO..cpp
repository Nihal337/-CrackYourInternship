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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL) return l2  ;
        else if(l2==NULL) return l1 ;
        
        
        ListNode* temp = NULL ;
        ListNode* a = l1  ;
        ListNode* b = l2 ;
        ListNode*curr = new ListNode ;
        curr = temp ;
        int carry = 0 ;
        
          while(a!=NULL or b != NULL) {
              
              int sum = 0 ;
              if(a!=NULL) sum +=  a->val ;
              if(b != NULL) sum += b->val ;
              
               sum += carry ;
              int no = sum%10 ;
              carry = sum/10 ;
              
              ListNode* newnode = new ListNode(no) ;
             
              if(curr==NULL) temp = newnode ;
            if(curr !=NULL)  curr->next = newnode ;
              curr = newnode ;
              
              if(a) a=a->next ;
              if(b) b= b->next ;
             
              
          }
        if(carry != 0) {
            ListNode* node = new ListNode(carry,NULL) ;
           
            curr->next = node ;
        }
        return temp ;
    }
};
