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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast) slow=slow->next;
        ListNode* curr=slow;
        ListNode* prev=NULL;
        ListNode* forward;
        while(curr)
        {
            forward=curr->next;
            curr->next = prev;
            prev=curr;
            curr=forward;
        }

        ListNode* newHead=head;
        ListNode* tail=prev;
        ListNode* temp;
        while(tail)
        {
            temp=newHead->next;
            newHead->next=tail;
            newHead=tail;
            tail=temp;
        }
        newHead->next = NULL;
    }
};