#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
  int n, m, sum = 0;
  cin >> n >> m;
  vector<int> ar(n);
  for (int &x : ar) {
    cin >> x;
    sum += x;
  }
  cout << sum % m << '\n';
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
