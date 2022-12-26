// https://leetcode.com/problems/majority-element/description/

// O(n) time, O(1) space - Boyer Moore Voting Alogrithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me = nums[0], cnt = 0;
        for (int &num : nums) {
            if (me != num) {
                cnt--;
                if (cnt == 0) {
                    me = num;
                    cnt++;
                }
            } else {
                cnt++;
            }
        }
        return me;
    }
};

// O(n) time, O(n) space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for (int &num : nums) {
            mp[num]++;
        }

        int mxCount = 0;
        int ans = -1;
        for (pair<const int, int> &p : mp) {
            if (p.second > mxCount) {
                mxCount = p.second;
                ans = p.first;
            }
        }
        return ans;
    }
};
