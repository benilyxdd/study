#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll n, C, m;
  cin >> n >> C;
  auto cmp = [](const array<ll, 3> &a, const array<ll, 3> &b) {
    if (a[0] == b[0]) {
      return a[1] > b[1];
    }
    return a[0] < b[0];
  };
  set<array<ll, 3>, decltype(cmp)> s(cmp);

  for (int i = 0; i < n; i++) {
    int cost, deal, heal;
    cin >> cost >> deal >> heal;
    s.insert({cost, heal, deal});
  }
  cin >> m;
  vector<array<ll, 2>> mon(m);  // deal, total_health
  for (array<ll, 2> &ar : mon) {
    cin >> ar[0] >> ar[1];
  }

  // for (const array<ll, 3> &ar : s) {
  //   cout << ar[0] << ' ' << ar[1] << ' ' << ar[2] << '\n';
  // }

  for (int i = 0; i < m; i++) {
    auto [deal, health] = mon[i];
    auto it = s.lower_bound({0, deal, 0});
    cout << (*it)[1] << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1, i = 1;
  // cin >> t;
  while (t--) {
    // cout << "Case #" << i << ": ";
    solve();
    // i++;
  }
  return 0;
}
