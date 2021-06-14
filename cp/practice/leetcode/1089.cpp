//https://leetcode.com/problems/duplicate-zeros/

// O(n) - loop
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        for (int i = 0, j = 0; i < n; i++, j++) {
            if (arr[j] == 0) {
                ans.push_back(0);
                i++;
                if (i < n) {
                    ans.push_back(0);
                }
            } else {
                ans.push_back(arr[j]);
            }
        }
        arr = ans;
    }
};