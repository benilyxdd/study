// https://leetcode.com/problems/car-fleet/

// O(n log n) - sort + monotonic decreasing stack
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<vector<int>> ar;
        for (int i = 0; i < n; i++) {
            ar.push_back({position[i], speed[i]});
        }
        sort(ar.rbegin(), ar.rend());
        
        stack<double> st;
        st.push((double)(target - ar[0][0]) / (double)ar[0][1]);
        for (int i = 1; i < n; i++) {
            double t = (double)(target - ar[i][0]) / (double)ar[i][1];
            if (t > st.top()) {
                st.push(t);
            }
        }
        
        return st.size();
    }
};