#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      cnt1++;
    } else {
      cnt2++;
    }
  }
  cout << min(cnt1 + cnt2, min(cnt1, cnt2) + min(cnt1, cnt2) + 1) << '\n';
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
