//https://leetcode.com/problems/maximum-units-on-a-truck/

// O(n log n) - priority queue
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<array<int, 2>> pq;
        for (vector<int> &vec : boxTypes) {
            pq.push({vec[1], vec[0]});
        }
        
        int ans = 0;
        while (truckSize > 0 && !pq.empty()) {
            array<int, 2> top = pq.top();
            int mx = min(top[1], truckSize);
            truckSize -= mx;
            ans += mx * top[0];
            pq.pop();
        }
        return ans;
    }
};