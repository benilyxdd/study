#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	vector<vector<int>> ar(26, vector<int>());
	for (int i = 0; i < 52; i++) {
		ar[s[i] - 'A'].emplace_back(i);
	}

	int ans = 0;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (ar[i][0] < ar[j][0] && ar[j][0] < ar[i][1] && ar[i][1] < ar[j][1]) {
				ans++;
			}
		}
	}
	cout << ans << '\n';
}

int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
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

