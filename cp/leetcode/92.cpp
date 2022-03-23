//https://leetcode.com/problems/reverse-linked-list-ii/

// O(?) - ??
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *pre, *cur, *dummy = new ListNode();
        dummy -> next = head;
        pre = dummy;
        for (int i = 0; i < left - 1; i++) {
            pre = pre -> next;
        }
        cur = pre -> next;
        for (int i = 0; i < right - left; i++) {
            ListNode *temp = pre -> next;
            pre -> next = cur -> next;
            cur -> next = cur -> next -> next;
            pre -> next -> next = temp;
        }
        return dummy -> next;
    }
};