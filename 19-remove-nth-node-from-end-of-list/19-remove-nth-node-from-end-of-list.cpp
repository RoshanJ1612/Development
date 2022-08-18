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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int c = 0;
        while(temp1!= NULL)
        {
            c++;
            temp1 = temp1->next;
        }
        
        int x = c - n;
        /*cout<<c<<endl;
        cout<<x<<endl;*/
        if(x == 0 && c ==1)
        { 
          return NULL;  
        }
        if(x == 0)
        {
            head = head->next;
            return head;
        }
        
        
        for(int i = 0; i<x-1;i++)
        {
            temp2 = temp2->next;
        }
        
        ListNode* target = temp2->next;
        temp2->next = target->next;
        
        return head;
        
        
        
    }
};