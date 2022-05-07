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
    void deleteNode(ListNode* node) {
     // first swap
        swap(node->val,node->next->val) ;
        // save the next node and delete to avoid memory leakage
        ListNode* temp = node->next ;
        node->next = node->next->next ;
        delete temp ;
    }
};
