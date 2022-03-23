#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len;
	if (s.length()%2) {
		s.erase(s.length()/2, 1);
	}
	string a = s.substr(0, s.length()/2);
	string b = s.substr(s.length()/2);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	cout << (a==b ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

