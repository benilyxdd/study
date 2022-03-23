//https://leetcode.com/problems/jump-game-iii/

// o(n) - stack
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<bool> ok(n, false);
        ok[start] = true;
        
        queue<int> st;
        st.push(start);
        
        while (!st.empty()) {
            int top = st.front();
            int back = top - arr[top];
            int front = top + arr[top];
            if (back > -1 && !ok[back]) {
                ok[back] = true;
                st.push(back);
            }
            if (front < n && !ok[front]) {
                ok[front] = true;
                st.push(front);
            }
            st.pop();
        }
        
        bool ans = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0 && ok[i]) {
                ans = true;
                break;
            }
        }
        
        return ans;
    }
};