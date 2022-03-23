// https://leetcode.com/problems/merge-two-sorted-lists/

// O(n + m) - loop
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ans = new ListNode(0), *tmp;
        tmp = ans;
        while (list1 || list2) {
            if (list1 && list2) {
                if (list1 -> val < list2 -> val) {
                    tmp -> next = list1;
                    list1 = list1 -> next;
                } else {
                    tmp -> next = list2;
                    list2 = list2 -> next;
                }
            } else {
                if (list1) {
                    tmp -> next = list1;
                    list1 = list1 -> next;
                } else {
                    tmp -> next = list2;
                    list2 = list2 -> next;
                }
            }
            tmp = tmp -> next;
        }
        return ans -> next;
    }
};