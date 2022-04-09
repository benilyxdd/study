// https://leetcode.com/problems/daily-temperatures/

// O(n) - monotonic stack (always in one direction [increasing / decraseing])
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& x) {
        int n = x.size();
        vector<int> ans(n, 0);
        stack<pair<int, int>> st;
        st.push({x[0], 0});
        
        for (int i = 1; i < n; i++) {
            while (!st.empty() && x[i] > st.top().first) {
                pair<int, int> pr = st.top();
                st.pop();
                ans[pr.second] = i - pr.second;
            }
            st.push({x[i], i});
        }
        
        return ans;
    }
};