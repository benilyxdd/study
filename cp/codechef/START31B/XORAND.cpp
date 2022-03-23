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

  vector<int> cnt(32, 0);
  for (int i = 0; i < n; i++) {
    int bit = __builtin_clz(ar[i]);
    cnt[bit]++;
  }

  ll ans = 0;
  for (int i = 0; i < 32; i++) {
    ans += (ll)cnt[i] * (cnt[i] - 1) / 2;
  }
  cout << ans << '\n';
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
