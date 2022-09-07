// https://leetcode.com/problems/top-k-frequent-elements/

// O(n) - some hash map trick
class Solution {
 public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    int n = nums.size();
    map<int, int> count;
    for (int &x : nums) {
      count[x]++;
    }

    vector<vector<int>> mp(n + 1, vector<int>());
    for (pair<const int, int> &p : count) {
      mp[p.second].push_back(p.first);
    }

    vector<int> res;
    for (int i = n; i >= 0; i--) {
      for (int &x : mp[i]) {
        res.push_back(x);
        if (res.size() == k) return res;
      }
    }

    return res;
  }
};

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