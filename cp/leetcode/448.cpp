//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

// O(n log n) - set insert requried (log n) time
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        for (int& x : nums) {
            s.insert(x);
        }
        
        int mx = nums.size();
        vector<int> ans;
        for (int i = 1; i <= mx; i++) {
            if (s.count(i) == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};