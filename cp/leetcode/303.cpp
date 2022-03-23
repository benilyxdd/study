// https://leetcode.com/problems/range-sum-query-immutable/

// O(n) - prefix sum (construt -> O(n), retrive -> O(1))
class NumArray {
 public:
  vector<int> prefix;
  NumArray(vector<int>& nums) {
    int sum = 0;
    for (int& x : nums) {
      sum += x;
      prefix.push_back(sum);
    }
  }

  int sumRange(int left, int right) {
    int whole = prefix[right];
    int front = left > 0 ? prefix[left - 1] : 0;
    return whole - front;
  }
};