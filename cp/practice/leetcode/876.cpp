// https://leetcode.com/problems/middle-of-the-linked-list/

// O(n) - loop
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *f = head, *s = head;
        while (s->next != nullptr && s->next->next != nullptr) {
            f = f->next;
            s = s->next->next;
        }
        if (s->next != nullptr) {
            f = f->next;
        }
        return f;
    }
};