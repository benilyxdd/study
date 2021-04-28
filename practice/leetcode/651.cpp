// four key -> {select all, copy, paste, type 'a'} -> to get most 'a' in n steps

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int cal(int n) {
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1] + 1;
            for (int j = 2; j < i; j++) {
                dp[i] = max(dp[i], dp[j - 2] * (i - j + 1));
            }
        }
        return dp[n];
    }
};

int main() {
    Solution sol;

    int n;
    cin >> n;
    vector<int> ar(n);
    for (int& x : ar) {
        cin >> x;
        cout << sol.cal(x) << '\n';
    }

    return 0;
}