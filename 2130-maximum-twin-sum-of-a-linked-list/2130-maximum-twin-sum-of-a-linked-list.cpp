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
    
    
    int pairSum(ListNode* head)
    {
        ListNode* temp = head;
        int c = 0;
        while(temp != NULL)
        {
            c++;
            temp = temp->next;    
        }
        
        temp = head;
        for(int i = 1; i<c/2;i++)
        {
            temp = temp->next;
        }
        
        ListNode* temp1 = temp->next;
        temp->next = NULL;
        
         ListNode* curr = temp1;
         ListNode* prev = NULL;
        while(curr != NULL)
        {
             ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        int max = 0;
         while(head != NULL)
        {
           int sum = head->val + prev->val;
            if(sum>max)
            {
                max = sum;
            }
            
            head = head->next;
             prev = prev->next;
         }
        
        return max;
        
}
};