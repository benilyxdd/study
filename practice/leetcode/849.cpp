//https://leetcode.com/problems/maximize-distance-to-closest-person/

// O(n) - simple loop
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        
        int f = -1, l = -1;
        for (int i = 0; i < n; i++) {
            if (seats[i] == 1) {
                l = i;
                if (f == -1) {
                    f = i;
                }
            }
        }
        
        int mx = max(f - 0, n - l - 1);
        for (int i = f; i <= l && l != f; i++) {
            if (seats[i] == 1) {
                int temp = 1;
                while (i < n - 1 && seats[i + 1] == 0) {
                    temp++, i++;
                }
                mx = max(mx, temp / 2);
            }
        }
        
        return mx;
    }
};