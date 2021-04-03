#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int n = s.length(), q;
	int pre[n+1];
	memset(pre, 0, sizeof(pre));
	for (int i = 0; i < n-1; i++) {
		if (s[i] == s[i+1]) {
			pre[i+1] = 1;
		}
	}
	partial_sum(pre, pre+n, pre);

	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		b--, a--;
		cout << pre[b] - pre[a] << '\n';
	}
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

