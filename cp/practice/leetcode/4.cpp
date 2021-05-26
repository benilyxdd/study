//https://leetcode.com/problems/median-of-two-sorted-arrays/

// O(log (min(n, m))) - binary search
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if (n > m) {
            swap(nums1, nums2);
            swap(n, m);
        }
        
        int lo = 0, hi = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int mid2 = (n + m + 1) / 2 - mid;
            
            int lx = (mid == 0 ? INT_MIN : nums1[mid - 1]);
            int ly = (mid2 == 0 ? INT_MIN : nums2[mid2 - 1]);
            int rx = (mid == n ? INT_MAX : nums1[mid]);
            int ry = (mid2 == m ? INT_MAX : nums2[mid2]);
            
            if (lx <= ry && ly <= rx) {
                if ((n + m) & 1) {
                    return max(lx, ly);
                } else {
                    return (max(lx, ly) + min(rx, ry)) / 2.0;
                }
            } else if (lx > ry) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return (double)0;
    }
};

// O(n + m log m) - inserting everything in multiset and find median

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