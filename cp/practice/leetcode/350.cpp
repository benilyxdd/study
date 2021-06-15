//https://leetcode.com/problems/intersection-of-two-arrays-ii/

// O(n log n) -  map
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        vector<int> ans;
        
        for (int &x : nums1) {
            mp[x]++;
        }
        
        for (int &x : nums2) {
            if (mp[x] > 0) {
                mp[x]--;
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};