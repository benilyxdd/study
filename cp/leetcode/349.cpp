//https://leetcode.com/problems/intersection-of-two-arrays/

// O(n log n) - map & set
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        set<int> ans;
        
        for (int &x : nums1) {
            mp[x]++;
        }
        
        for (int &x : nums2) {
            if (mp[x] > 0) {
                ans.insert(x);
            }
        }
        vector<int> ar(ans.begin(), ans.end())
        
        return ar;
    }
};