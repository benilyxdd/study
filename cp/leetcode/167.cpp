//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// O(n) - two pointers 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int lo = 0, hi = n - 1;
        
        while (lo < hi) {
            int sum = numbers[lo] + numbers[hi];
            if (sum > target) {
                hi--;
            } else if (sum < target) {
                lo++;
            } else {
                break;
            }
        }
        
        return {lo + 1, hi + 1};
    }
};

// O(n) - two pointer (old)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for (int i = 0, j = numbers.size()-1; i < j;) {
            int sum = numbers[i]+numbers[j];
            if (sum > target)
                j--;
            else if (sum < target)
                i++;
            else {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        return ans;
    }
};