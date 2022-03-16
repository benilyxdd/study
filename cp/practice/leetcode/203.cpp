// https://leetcode.com/problems/remove-linked-list-elements/

// O(n) - loop
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ans = new ListNode(0);
        ans -> next = head;
        head = ans;
        while (head) {
            if (head -> next && head -> next -> val == val) {
                head -> next = head -> next -> next;
            } else {
                head = head -> next;
            }
        }
        return ans -> next;
    }
};