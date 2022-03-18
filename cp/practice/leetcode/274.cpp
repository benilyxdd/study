// https://leetcode.com/problems/h-index/

// O(n log n) - priority queue
class Solution {
 public:
  int hIndex(vector<int>& c) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = c.size(), ans = 0;
    for (int i = 0; i < n; i++) {
      if (c[i] > ans) {
        pq.push(c[i]);
      }
      while (!pq.empty() && pq.top() <= ans) {
        pq.pop();
      }
      if (pq.size() > ans) {
        ans++;
      }
    }
    return ans;
  }
};