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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* left;
        ListNode* right;
        ListNode* curr;
        ListNode* prev;
        ListNode* next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
           }
           if(fast!=NULL){
            right=slow->next;
            }
            else{
                right=slow;
            }
            prev=NULL;
            curr=right;
            while(curr!=NULL){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            right=prev;
            left = head;

        while (right != NULL) {
    if (left->val != right->val) return false;
    left = left->next;
    right = right->next;
}
return true;

       
    }
};