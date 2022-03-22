#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;
  string temp = "";
  for (int i = 0; i < n; i++) {
    temp += s[i];
    if (temp.length() < 2) {
      continue;
    }
    if (temp == "()" || temp == "((" || temp == "))") {
      cnt++;
      temp = "";
    } else {
      while (temp[temp.length() - 1] != ')' && i + 1 < n) {
        temp += s[i + 1];
        i++;
      }
      if (temp[temp.length() - 1] == ')') {
        cnt++;
        temp = "";
      }
    }
  }
  cout << cnt << ' ' << temp.length() << '\n';
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
