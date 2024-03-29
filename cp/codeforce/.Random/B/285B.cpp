#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, s, t, ar[mxN];
bool ok[mxN];

void solve() {
	cin >> n >> s >> t;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (ar[i-1] != i) {
			ok[i] = 1;
			cnt++;
		}
	}
	if (s == t) {
		cout << 0;
		return;
	}

	if (ok[t] == 0) {
		cout << -1;
		return;
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

