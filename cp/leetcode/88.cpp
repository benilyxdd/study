//https://leetcode.com/problems/merge-sorted-array/

// O(n + m) with space O(1) - two pointers
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int fi = m - 1, se = n - 1;
        
        for (int i = n + m - 1; i >= 0; i--) {
            if (fi == -1) {
                nums1[i] = nums2[se--];
            } else if (se == -1) {
                nums1[i] = nums1[fi--];
            } else {
                nums1[i] = (nums1[fi] > nums2[se] ? nums1[fi--] : nums2[se--]);
            }
        }
    }
};

// O(n + m) - two pointers
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(n + m);
        int fi = 0, se = 0;
        
        for (int i = 0; i < n + m; i++) {
            if (fi == m) {
                ans[i] = nums2[se++];
            } else if (se == n) {
                ans[i] = nums1[fi++];
            } else {
                ans[i] = (nums1[fi] < nums2[se] ? nums1[fi++] : nums2[se++]);
            }
        }
        nums1 = ans;
    }
};


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
