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
    ListNode* deleteDuplicates(ListNode* head) 
    {
      ListNode*p=head;
        while(p!=NULL)
        {
            ListNode*q=p;
            while(q->next!=NULL && q->val==q->next->val)
            {
                q=q->next;
            }
            p->next=q->next;
            p=q->next;
        }
        return head;
    }   
};