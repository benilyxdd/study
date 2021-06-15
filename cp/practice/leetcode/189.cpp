//https://leetcode.com/problems/rotate-array/

// O(n) - insert & delete
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        vector<int> save(nums.end() - k, nums.end());
        for (int &x : save) {
            cout << x << ' ';
        }
        
        nums.insert(nums.begin(), save.begin(), save.end());
        for (int i = 0; i < k; i++) {
            nums.pop_back();
        }
    }
};