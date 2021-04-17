//https://leetcode.com/problems/linked-list-cycle-ii/

// O(n log n) - set insert requried log n time
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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> seen;
        while (head != NULL) {
            if (seen.count(head) == 1) {
                return head;
            }
            seen.insert(head);
            head = head -> next;
        }
        return NULL;
    }
};