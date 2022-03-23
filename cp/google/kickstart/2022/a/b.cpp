#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string s;
  cin >> s;

  int digitCount = 0, n = s.length();
  for (char &ch : s) {
    digitCount += ch - '0';
  }
  char charAdd = char((9 - digitCount % 9) % 9 + '0');
  bool added = false;
  string ans = "";
  for (int i = 0; i < n; i++) {
    if (!added && charAdd < s[i]) {
      if (charAdd == '0' && i > 0 || charAdd != '0') {
        ans += charAdd;
        added = true;
      }
    }
    ans += s[i];
  }

  if (!added) {
    ans += charAdd;
  }
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1, i = 1;
  cin >> t;
  while (t--) {
    cout << "Case #" << i << ": ";
    solve();
    i++;
  }
  return 0;
}