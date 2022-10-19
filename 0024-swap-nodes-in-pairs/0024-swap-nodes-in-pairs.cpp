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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        //rl points to remaining list other than first 2 nodes
        ListNode *rl = head->next->next;

        //nh is the new head of the remaining list
        ListNode* nh = head->next;
        nh->next = head;
        head->next = swapPairs(rl);

        return nh;
    }
};