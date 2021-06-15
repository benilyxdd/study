//https://leetcode.com/problems/delete-node-in-a-linked-list/

// O(1) - WTF
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node -> next;
    }
};

// O(???) - ...
class Solution {
public:
    void deleteNode(ListNode* node) {
        while (node -> next != NULL) {
            node -> val = node -> next -> val;
            if (node -> next -> next == NULL) {
                node -> next = NULL;
                break;
            } else {
                node = node -> next;
            }
        }
    }
};