// https://leetcode.com/problems/top-k-frequent-elements/

// O(n log n)
class Solution {
 public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    int n = nums.size();
    map<int, int> mp;
    // O(n)
    for (int &num : nums) {
      mp[num]++;
    }

    // O(n)
    vector<pair<int, int>> vec;
    for (auto &it : mp) {
      vec.push_back(it);
    }
    auto cmp = [](pair<int, int> &a, pair<int, int> &b) {
      return a.second > b.second;
    };
    // O(n log n)
    sort(vec.begin(), vec.end(), cmp);

    // O(n)
    vector<int> ans;
    for (int i = 0; i < k; i++) {
      ans.push_back(vec[i].first);
    }
    return ans;
  }
};