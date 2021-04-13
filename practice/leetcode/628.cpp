//https://leetcode.com/problems/maximum-product-of-three-numbers/

// O(n log n) - sort 
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    
        set<vector<int>::iterator> s;
        auto it = (--nums.end());
        auto it2 = nums.begin();
        for (int i = 0; i < 3; i++, it--, it2++) {
            s.insert(it);
            s.insert(it2);
        } 
        
        vector<int> ar;
        for (const vector<int>::iterator& it : s) {
            ar.push_back(*it);
        }
        
        int mx = -(int)1e9 - 5, n = ar.size();
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                for (int k = 2; k < n; k++) {
                    if (i != j && j != k && i != k) {
                        int pro = ar[i] * ar[j] * ar[k];
                        mx = max(pro, mx);
                    }
                }
            }
        }
        return mx;
    }
};