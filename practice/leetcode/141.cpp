//https://leetcode.com/problems/linked-list-cycle/

// O(n) - floyd tortoise and hare algorithm (without change the val of ListNode)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* tor = head;
        ListNode* har = head;
        while (tor != NULL && har != NULL && har -> next != NULL) {
            tor = tor -> next;
            har = har -> next -> next;
            
            if (tor == har) {
                return true;
            }
        }
        return false;
    }
};

// O(n) - n -> max mode
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
    bool hasCycle(ListNode *head) {
        while (head != NULL) {
            if (head -> val == (int)1e6) {
                return true;
            }
            head -> val = (int)1e6;
            head = head -> next;
        }
        return false;
    }
};