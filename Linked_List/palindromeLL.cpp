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
    // brute force approach
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL) return false ;
      string b ="" ;
        ListNode* a = head ;
        while(a!=NULL) {
             b.push_back(a->val+'0') ;
            a = a->next ;
        }
       
      string c = b ;
      reverse(c.begin(),c.end() ) ;
         
        if(c==b) return true ;
        else return false ;
    }    
};
