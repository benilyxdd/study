#include <bits/stdc++.h>
using namespace std;

#define ll long long

set<char> s = {'a', 'e', 'i', 'o', 'u'};

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  char last_char = tolower(s[n - 1]);

  if (last_char == 'y') {
    cout << s << " is ruled by nobody.\n";
  } else if (last_char == 'a' || last_char == 'e' || last_char == 'i' ||
             last_char == 'o' || last_char == 'u') {
    cout << s << " is ruled by Alice.\n";
  } else {
    cout << s << " is ruled by Bob.\n";
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
