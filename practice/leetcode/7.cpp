//https://leetcode.com/problems/reverse-integer/

// O(n) - simple reverse thing
class Solution {
public:
    int reverse(int N) {
        string a = to_string(N);
        a = string(a.rbegin(), a.rend());
        if (N < 0) {
            a.insert(0, "-");
        }
        int ans;
        try {
            ans = stoi(a);
            return ans;
        } catch(out_of_range) {
            return 0;
        }
    }
};