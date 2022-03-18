#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {}

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

// impossible cases:
// 1. abs(red stone - blue stone) < 2
// 2. more than 1 winning path
// 3. ?