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

	//reverse the linkedlist
    ListNode *reverse(ListNode *node)
    {
        ListNode *prev=NULL,*pre=node,*next;
        
        while(pre)
        {
            next=pre->next;
            pre->next=prev;
            prev=pre;
            pre=next;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        int numberOfNodes=0;
        ListNode *nd=head,*mid,*rev,*prev;
        //count the numbeofnodes
        while(nd)
        {
            nd=nd->next;
            numberOfNodes++;
        }
        
        int cnt=0;
        nd=head;
		//go to middle
        while(cnt!=numberOfNodes/2)
        {
            prev=nd;
            nd=nd->next;
            cnt++;
        }
        
        mid=nd;
        if(numberOfNodes==1)
            return true;
        if(numberOfNodes%2==1)
        {
            mid=mid->next;
            prev->next=NULL;
        }
        else
            prev->next=NULL;
        
            
        rev=reverse(mid);
        nd=head;
        //check 1st half and reversed 2nd half
        while(nd)
        {
          if(nd->val!=rev->val)
                return false;
            nd=nd->next;
            rev=rev->next;
        }
        return true;
    
    }
};