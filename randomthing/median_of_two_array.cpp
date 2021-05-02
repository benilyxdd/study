#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double cal(vector<int>& nums1, vector<int>& nums2) {
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

int main() {
    vector<int> a = {1, 3};
    vector<int> b = {2};
    vector<int> c = {23, 26, 31, 35};
    vector<int> d = {3, 5, 7, 9, 11, 16};
    cout << cal(a, b) << '\n';
    cout << cal(c, d) << '\n';
}