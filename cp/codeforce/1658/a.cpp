#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == '0' && s[i + 1] == '0') {
      ans += 2;
    }
    if (i + 2 < n && s[i] == '0' && s[i + 2] == '0' && s[i + 1] == '1') {
      ans++;
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
