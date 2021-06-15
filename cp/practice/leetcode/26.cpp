//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// O(n) - loop
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (!n) {
            return 0;
        }
        for (vector<int>::iterator it = ++nums.begin(); it != nums.end(); it++) {
            vector<int>::iterator back = it;
            back--;
            
            if (*back == *it) {
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};