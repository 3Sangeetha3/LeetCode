/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // // overwriting method
        // // dont know the head and previous element 
        node->val = node->next->val;
        node->next = node->next->next;
        // But originally node is not deleted 
    }
};