// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// O(n) - two pointers
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        
        while (n--) {
            fast = fast->next;
        }
        
        if (!fast) {
            return head->next;
        }
        
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return head;
        
    }
};