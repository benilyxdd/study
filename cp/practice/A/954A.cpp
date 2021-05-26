#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < n-1; i++) {
		if (s[i] == 'R' && s[i+1] == 'U' || s[i] == 'U' && s[i+1] == 'R') {
			cnt++;
			i++;
		}
	}
	cout << s.length() - cnt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
