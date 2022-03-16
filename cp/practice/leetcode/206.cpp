// https://leetcode.com/problems/reverse-linked-list/

// O(n) - loop
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *cur=head, *tmp;
        while(cur){
            tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        return prev;
    }
};