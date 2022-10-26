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
    void reverse(ListNode* start, ListNode* end){
        ListNode* curr=start, *prev=NULL;
        while(prev!=end){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head or !head->next or k==1){
            return head;
        }
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* beforeStart=dummy, *end=head;
        int i=1;
        while(end){
            if(i%k==0){
                ListNode* headNext=end->next;
                ListNode* start=beforeStart->next;
                reverse(start, end);
                beforeStart->next=end;
                start->next=headNext;
                beforeStart=start;
                end=headNext;
            }else{
                end=end->next;
            }
            i++;
        }
        return dummy->next;    
    }
};