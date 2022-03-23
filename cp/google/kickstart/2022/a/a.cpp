#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string a, b;
  cin >> a >> b;

  stack<char> st, st2;
  int cnt = 0, n = a.length();
  for (char &ch : a) {
    st.push(ch);
  }
  for (char &ch : b) {
    st2.push(ch);
  }
  while (!st.empty() && !st2.empty()) {
    int top = st.top();
    int top2 = st2.top();
    if (top != top2) {
      st2.pop();
      cnt++;
    } else {
      st.pop();
      st2.pop();
    }
  }

  if (st.empty() && !st2.empty()) {
    cnt += st2.size();
  }
  if (!st.empty()) {
    cout << "IMPOSSIBLE\n";
    return;
  }
  cout << cnt << '\n';
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