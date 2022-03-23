#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> ar(n);
  for (int i = 0; i < n; i++) {
    cin >> ar[i];
  }

  int mx = 0;
  for (int i = 0; i < n; i++) {
    if ((ar[i] < mx && ar[i] != -1) || ar[i] > i + 1) {
      cout << -1 << '\n';
      return;
    } else {
      mx = max(mx, ar[i]);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1, i = 1;
  cin >> t;
  while (t--) {
    // cout << "Case #" << i << ": ";
    solve();
    // i++;
  }
  return 0;
}
