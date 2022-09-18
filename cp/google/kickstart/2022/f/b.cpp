#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  for (int tt = 0; tt < tc; tt++) {
    int n, q;
    cin >> n >> q;
    map<int, int> level;
    vector<vector<int>> vec(10005, vector<int>());

    level[1] = 0;
    vec[0].push_back(1);

    vector<array<int, 2>> temp(n - 1, array<int, 2>());
    for (int i = 0; i < n - 1; i++) {
      cin >> temp[i][0] >> temp[i][1];
      if (temp[i][0] > temp[i][1]) {
        swap(temp[i][0], temp[i][1]);
      }
    }
    sort(temp.begin(), temp.end());

    for (int i = 0; i < n - 1; i++) {
      int o = temp[i][0];
      int p = temp[i][1];

      level[p] = level[o] + 1;
      vec[level[p]].push_back(o);
    }

    for (int i = 0; i < q; i++) {
      int p;
      cin >> p;
    }

    int ans = 0;
    int q_copy = q;
    int cur_level = 0;
    while (q_copy > 0 && cur_level < n) {
      int level_size = vec[cur_level].size();
      if (level_size <= q_copy) {
        q_copy -= level_size;
        ans += level_size;
        cur_level++;
      } else {
        break;
      }
    }

    cout << "Case #" << tt + 1 << ": " << ans << '\n';
  }
}