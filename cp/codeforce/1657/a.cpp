#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int x, y;
  cin >> x >> y;
  if (x == 0 && y == 0) {
    cout << 0 << '\n';
    return;
  } else {
    int x_sq = x * x;
    int y_sq = y * y;
    int total_sq = sqrt(x_sq + y_sq);
    if (total_sq * total_sq == x_sq + y_sq) {
      cout << 1 << '\n';
      return;
    }
  }
  cout << 2 << '\n';
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
