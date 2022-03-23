// https://leetcode.com/problems/sliding-window-maximum/

// O(n log n) - multiset
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        
        multiset<int> ms;
        for (int i = 0; i < min(n, k - 1); i++) {
            ms.insert(nums[i]);
        }
        
        for (int i = k - 1; i < n; i++) {
            ms.insert(nums[i]);
            ans.push_back(*(--ms.end()));
            
            auto it = ms.find(nums[i - k + 1]);
            ms.erase(it);
        }
        
        return ans;
    }
};