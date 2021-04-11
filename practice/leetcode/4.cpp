//https://leetcode.com/problems/median-of-two-sorted-arrays/

// O(n + mlogm) - inserting everything in multiset and find median

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> mt(nums1.begin(), nums1.end());
        
        for (int& x : nums2) {
            mt.insert(x);
        }
        int n = mt.size();
        
        auto it = mt.cbegin();
        advance(it, n / 2);
        
        double median = 0;
        if (n % 2 == 0) {
            auto it2 = it--;
            median = (double) (*it + *it2) / 2;
        } else {
            median = *it;
        }
        
        return median;
    }
};