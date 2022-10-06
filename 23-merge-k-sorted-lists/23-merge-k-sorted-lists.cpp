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
   ListNode* mergeKLists(vector<ListNode*>& lists) {
		//1. Create a min heap
        priority_queue<int, vector<int>, greater<int>> minHeap;
		//2. push all of the elements in the min heap.
        for(auto list: lists){
            while(list != NULL){
                minHeap.push(list->val);
                list = list->next;
            }
        }
		//3. Create a node to store the values.
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
		//4. iterate through the min heap and store each value into the linked list
        while(!minHeap.empty()){
            head->next = new ListNode(minHeap.top());
            minHeap.pop();
            head = head->next;
        }
        return dummy->next;
    }
};