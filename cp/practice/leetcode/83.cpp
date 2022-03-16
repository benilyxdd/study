// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// O(n) - loop
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans = head;
        while (head) {
            while (head->next && head->next->val == head->val) {
                head->next = head->next->next;
            }
            head = head->next;
        }
        return ans;
    }
};