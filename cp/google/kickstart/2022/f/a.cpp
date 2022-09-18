#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  for (int tt = 0; tt < tc; tt++) {
    int n;
    cin >> n;

    vector<pair<string, array<int, 2>>> vec;
    for (int i = 0; i < n; i++) {
      string color;
      int d, u;
      cin >> color >> d >> u;
      vec.push_back({color, {d, u}});
    }

    auto ada_cmp = [&](pair<string, array<int, 2>>& a,
                       pair<string, array<int, 2>>& b) {
      if (a.first == b.first) {
        return a.second[1] < b.second[1];
      }
      return lexicographical_compare(a.first.begin(), a.first.end(),
                                     b.first.begin(), b.first.end());
    };

    auto charles_cmp = [&](pair<string, array<int, 2>>& a,
                           pair<string, array<int, 2>>& b) {
      if (a.second[0] == b.second[0]) {
        return a.second[1] < b.second[1];
      }
      return a.second[0] < b.second[0];
    };

    auto ada = vector(vec.begin(), vec.end());
    auto charles = vector(vec.begin(), vec.end());

    sort(ada.begin(), ada.end(), ada_cmp);
    sort(charles.begin(), charles.end(), charles_cmp);

    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans += (ada[i] == charles[i]);
    }

    cout << "Case #" << tt + 1 << ": " << ans << '\n';
  }
}