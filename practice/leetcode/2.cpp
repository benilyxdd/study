//https://leetcode.com/problems/add-two-numbers/

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

// O(2^n) - just iterate over all nodes
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* l3 = new ListNode(0);
        ListNode* first = l3;
        while (l1 != NULL || l2 != NULL) {
            int sum = carry;
            if (l1 != NULL) {
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2 != NULL) {
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            l3 -> next = new ListNode(sum % 10);
            carry = sum / 10;
            l3 = l3 -> next;
        }
        
        if (carry > 0) {
            l3 -> next = new ListNode(carry);
        }
        
        return first -> next;
    }
};