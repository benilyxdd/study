// https://leetcode.com/problems/daily-temperatures/

// O(n) - monotonic stack (always in one direction [increasing / decraseing])
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& x) {
        int n = x.size();
        vector<int> ans(n, 0);
        stack<int> st;
        st.push(0);
        
        for (int i = 1; i < n; i++) {
            while (!st.empty() && x[i] > x[st.top()]) {
                int top = st.top();
                st.pop();
                ans[top] = i - top;
            }
            st.push(i);
        }
        
        return ans;
    }
};