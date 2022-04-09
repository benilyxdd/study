c// https://leetcode.com/problems/largest-rectangle-in-histogram/

// O(n) - stack 
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), mx = 0;
        stack<array<int, 2>> st;
        
        for (int i = 0; i < n; i++) {
            int cur = i;
            while (!st.empty() && heights[i] < st.top()[1]) {
                array<int, 2> top = st.top();
                mx = max(mx, (i - top[0]) * top[1]);
                
                if (heights[i] <= top[1]) {
                    cur = top[0];
                }
                st.pop();
            }

            st.push({cur, heights[i]});
        }
        
        while (!st.empty()) {
            array<int, 2> top = st.top();
            mx = max(mx, (n - top[0]) * top[1]);
            st.pop();
        }
        
        return mx;
    }
};