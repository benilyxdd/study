//https://leetcode.com/problems/merge-sorted-array/

// O((n + m) * log (n + m)) - multiset insert requried log n;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> s;
        for (int i = 0; i < m; i++) {
            s.insert(nums1[i]);
        }
        for (int i = 0; i < n; i++) {
            s.insert(nums2[i]);
        }
        nums1 = vector(s.begin(), s.end());
    }
};
