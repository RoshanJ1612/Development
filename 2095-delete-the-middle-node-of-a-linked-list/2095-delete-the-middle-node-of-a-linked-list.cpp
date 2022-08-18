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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int c = 0;
        while(temp1!= NULL)
        {
            c++;
            temp1 = temp1->next;
        }
        
        if(c==1)
        {
            return NULL;
        }
        int n = c/2;
        
        
        
        if(n == 0)
        {
            
            temp2 = temp2->next;
            head = temp2;
        }
        for(int i = 0; i<n-1;i++)
        {
            temp2 = temp2->next;
        }
        
        ListNode* target = temp2->next;
        temp2->next = target->next;
        
        return head;
        
        
    }
};