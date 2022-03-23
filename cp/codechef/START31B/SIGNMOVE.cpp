#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
  int n;
  cin >> n;
  int rem = n % 2;
  n = n / 2 + rem;
  cout << (rem ? -1 : 1) * n << '\n';
}

signed main() {
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
