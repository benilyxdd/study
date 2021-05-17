#include <bits/stdc++.h>
using namespace std;

const int mxN = (int)1e5 + 4;
int mem[mxN];

int cal(vector<int> &ar, int n) {  
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return abs(ar[0] - ar[1]);
    }
    if (mem[n] != -1) {
        return mem[n];
    }
    int x = cal(ar, n - 2) + abs(ar[n - 2] - ar[n]);
    int y = cal(ar, n - 1) + abs(ar[n - 1] - ar[n]);
    return mem[n] = min(x, y);
}

void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int &x : ar) {
        cin >> x;
    }
    memset(mem, -1, sizeof(mem));
    int ans = cal(ar, n - 1);
    cout << ans;
}

int main() {
    solve();
    return 0;
}