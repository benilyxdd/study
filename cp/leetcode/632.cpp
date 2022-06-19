// https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/

// O(n log n + n) - sliding window
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<array<int, 2>> ar;
        for (int i = 0; i < nums.size(); i++) {
            for (int &x : nums[i]) {
                ar.push_back({x, i});
            }
        }
        sort(ar.begin(), ar.end());
        
        vector<int> ans;
        vector<int> cnt(nums.size(), 0);
        int i = 0, j = 0;
        for (int k = 0; k < ar.size(); k++) {
            if (!cnt[ar[k][1]]++) j++;
            if (j == nums.size()) {
                while (cnt[ar[i][1]] > 1)  --cnt[ar[i++][1]];
                if (ans.empty() || ans[1] - ans[0] > ar[k][0] - ar[i][0]) {
                    ans = {ar[i][0], ar[k][0]};
                }
            }
        }
        
        return ans;
    }
};