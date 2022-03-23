//https://leetcode.com/problems/contains-duplicate/

// O(n log n) - set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (int& x : nums) 
            s.insert(x);
        return !(s.size() == nums.size());
    }
};