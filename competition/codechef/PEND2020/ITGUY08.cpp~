#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int a[mxN], b[mxN], n, m;
int cnt[mxN];

void solve() {
	memset(cnt, 0, sizeof(cnt));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		cnt[b[i]]++;
	}
	
	for (int i = 0; i < mxN; i++) {
		if (cnt[i] == 1) {
			cout << i << " ";
		}
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

