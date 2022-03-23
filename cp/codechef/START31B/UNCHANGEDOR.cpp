#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  cin >> n;
  ll a = 1, b = 2;
  ll ans = 0;
  while (b < n) {
    a *= 2;
    b *= 2;
    if (n < b) {
      ans += n - a;
      break;
    } else {
      ans += b - a - 1;
    }
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
