//https://leetcode.com/problems/two-sum/

// O(n^2) - brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i]+nums[j] == target && i != j) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

// O(n) - using map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            m[nums[i]] = i;
        }
        
        for (int i = 0; i < n; i++) {
            int f = target - nums[i];
            if (m.find(f) != m.end() && m[f] != i) {
                vector<int> ans = {m[f], i};
                return ans;
            }
        }
        vector<int> a;
        return a;
    }
};