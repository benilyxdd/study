#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, x; cin >> a >> b;
	string s; cin >> s;
	int len = s.length();
	int pre[len+1][26];
	memset(pre, 0, sizeof(pre));
	for (int i = 1; i <= len; i++) {
		memcpy(pre[i], pre[i-1], 26*sizeof(int));
		pre[i][s[i-1]-'a']++;
	}
	int ans[26];
	memcpy(ans, pre[len], sizeof(pre[len]));
	for (int i = 0; i < b; i++) {
		cin >> x;
		for (int j = 0; j < 26; j++) {
			ans[j] += pre[x][j];
		}
	}
	for (int& xd : ans) {
		cout << xd << " ";
	}
	cout << "\n";
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

