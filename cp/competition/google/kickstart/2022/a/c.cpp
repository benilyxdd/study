#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<string, char> m = {{"0000", '1'}, {"1111", '0'}, {"1010", '0'},
                       {"0101", '1'}, {"0111", '1'}, {"1000", '0'}};
set<string> notOk = {"00000", "11111", "01010", "10101", "10001", "01110"};

void solve() {
  int n;
  string s;
  cin >> n >> s;

  if (n <= 5) {
    if (notOk.find(s) != notOk.end()) {
      cout << "IMPOSSIBLE\n";
    } else {
      cout << "POSSIBLE\n";
    }
    return;
  }

  string cur = "";
  for (int i = 0; i < 4; i++) {
    cur += (s[i] == '?' ? '0' : s[i]);
  }

  for (int i = 5; i < n; i++) {
    string temp = cur.substr(i - 5);

    if (m.find(temp) != m.end()) {
      cur += m[temp];
    } else {
      cur += '0';
    }
  }

  string new_s = "";
  for (char &ch : cur) {
    new_s = new_s + '#' + ch;
  }
  new_s += "#";

  auto test = [&](string s) {
    s = "$" + s + "^";
    int n = s.length();
    int l = 0, r = 0;
    vector<int> p(n + 2);

    for (int i = 1; i < n - 1; i++) {
      int j = l - (i - l);
      if (r > i) {
        p[i] = min(r - i, p[j]);
      }
      while (s[i + 1 + p[i]] == s[i - 1 - p[i]]) {
        p[i]++;
      }

      if (i + p[i] > r) {
        l = i, r = i + p[i];
      }
    }

    int mx = 0;
    for (int &in : p) {
      mx = max(in, mx);
    }
    return mx;
  };
  auto mx = test(new_s);
  cout << (mx >= 5 ? "IMPOSSIBLE\n" : "POSSIBLE\n");
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