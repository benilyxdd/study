#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n, m, p;
  cin >> n >> m >> p;
  vector<string> pref(n), forb(m);
  set<string> forb_set;
  for (string &st : pref) {
    cin >> st;
  }
  for (string &st : forb) {
    cin >> st;
    forb_set.insert(st);
  }

  vector<int> ar(p);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      ar[j] += pref[i][j] == '1';
    }
  }

  vector<vector<pair<int, string>>> all(p + 1, vector<pair<int, string>>());
  all[0].push_back({0, ""});
  for (int i = 1; i <= p; i++) {
    for (pair<int, string> &pr : all[i - 1]) {
      all[i].push_back({pr.first + ar[i - 1], pr.second + '0'});
      all[i].push_back({pr.first + n - ar[i - 1], pr.second + '1'});
    }

    sort(all[i].begin(), all[i].end());

    all[i] = vector<pair<int, string>>(&all[i][0],
                                       &all[i][min((int)all[i].size(), m + 1)]);
  }

  for (pair<int, string> &pr : all[p]) {
    if (forb_set.find(pr.second) == forb_set.end()) {
      cout << pr.first << '\n';
      return;
    }
  }
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
