// https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan&id=level-1

// O(n) - prefix suffix
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n + 2, 0), suf(n + 2, 0);

        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            suf[i + 1] = suf[i + 2] + nums[i];
        }
        
        for (int i = 0; i < n; i++) {
            if (pre[i + 1] == suf[i + 1]) {
                return i;
            }
        }

        return -1;
    }
};