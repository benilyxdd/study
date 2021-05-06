#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	cout << (s == "abc" ? "Yes" : "No");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

