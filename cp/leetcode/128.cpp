// https://leetcode.com/problems/longest-consecutive-sequence/

// O(n) - unordered_set
class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    unordered_set<int> us(nums.begin(), nums.end());

    int mx = 0;
    int n = nums.size();
    for (auto& num : us) {
      if (us.find(num - 1) == us.end()) {
        int len = 0;
        while (us.find(len + num) != us.end()) {
          len++;
        }
        mx = max(mx, len);
      }
    }
    return mx;
  }
};

// O(n log n) - priority_queue
class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int& num : nums) {
      pq.push(num);
    }

    int mx = 1, curMx = 1;
    int cur = pq.top();
    pq.pop();
    while (!pq.empty()) {
      int top = pq.top();
      pq.pop();
      if (cur - top == -1) {
        curMx++;
        mx = max(mx, curMx);
      } else if (cur == top) {
        continue;
      } else {
        curMx = 1;
      }
      cur = top;
    }
    return mx;
  }
};