// https://leetcode.com/problems/group-anagrams/

// O(m log m * n) - m -> max length of str inside strs & n -> strs.length
class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    map<string, int> mp;

    for (string& st : strs) {
      string temp = st;
      sort(temp.begin(), temp.end());
      if (!mp.count(temp)) {
        mp[temp] = ans.size();
        ans.push_back({st});
      } else {
        ans[mp[temp]].push_back(st);
      }
    }
    return ans;
  }
};