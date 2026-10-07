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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head ; 
        ListNode * curr = dummy , *temp1 ;
        while(curr->next!=nullptr) {
            if(curr->next->val == val ){
                temp1 = curr->next->next;
                delete curr->next; 
                curr->next=temp1;
            }else{
                curr=curr->next;
            }
        }
        head = dummy->next;
        return head ; 
    }
};