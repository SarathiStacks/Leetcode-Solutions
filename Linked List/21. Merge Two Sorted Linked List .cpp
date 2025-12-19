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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode* dummy=new ListNode(0);
        ListNode* res=dummy;
        dummy->next=res;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val==l2->val){
                res->next=l1;
                l1=l1->next;
                res=res->next;
            }
            else if(l1->val<l2->val){
                res->next=l1;
                l1=l1->next;
                res=res->next;
            }
            else{
                res->next=l2;
                l2=l2->next;
                res=res->next;
            }
        }
        if(l1!=NULL){
            res->next=l1;
            res=res->next;
        }
        else{
            res->next=l2;
            res=res->next;
        }
        return dummy->next;
        }
};