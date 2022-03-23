// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

// O(1) - math
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        return accumulate(++salary.begin(), --salary.end(), 0.0) / (salary.size() - 2);
    }
};