#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n, mx = 0;
  cin >> n;
  vector<int> ar(n);
  for (int &x : ar) {
    cin >> x;
  }

  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < n; i++) {
    if (ar[i] > mx) {
      pq.push(ar[i]);
    }
    while (!pq.empty() && pq.top() <= mx) {
      pq.pop();
    }
    if (pq.size() >= mx + 1) {
      mx++;
    }
    cout << mx << ' ';
  }
  cout << '\n';
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
