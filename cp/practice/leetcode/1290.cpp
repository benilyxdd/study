// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

// O(v) - loop
class Solution {
 public:
  int getDecimalValue(ListNode* head) {
    int ans = 0;
    vector<int> bin;
    while (head) {
      bin.push_back(head->val);
      head = head->next;
    }
    int n = bin.size();
    for (int i = n - 1; i >= 0; i--) {
      int power = n - 1 - i;
      ans += bin[i] * pow(2, power);
    }
    return ans;
  }
};