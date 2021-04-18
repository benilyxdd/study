//https://leetcode.com/problems/linked-list-cycle-ii/

// O(n) - floyd tortoise and hare algorithm (without change val)
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* tor = head;
        ListNode* har = head;
        while (tor != NULL && har != NULL && har -> next != NULL) {
            tor = tor -> next;
            har = har -> next -> next;
            
            if (tor == har) {
                break;
            }
        }
        if (har == NULL || har -> next == NULL) {
            return NULL;
        }
        tor = head;
        while (tor != har) {
            tor = tor -> next;
            har = har -> next;
        }
        return tor;
    }
};


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