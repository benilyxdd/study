#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string a, b;
	cin >> n >> a >> b;
	
	int cnt0[n], cnt1[n];
	memset(cnt0, 0, sizeof(cnt0));
	memset(cnt1, 0, sizeof(cnt1));

	for (int i = 0; i < n; i++) {
		if (a[i] == '1') {
			cnt0[i]++;
		} else {
			cnt1[i]++;
		}
	}

	partial_sum(cnt0, cnt0+n, cnt0);
	partial_sum(cnt1, cnt1+n, cnt1);

	bool ok = 1;
	int cnt = 0;
	for (int i = n-1; i >= 0; i--) {
		if (cnt&1) {
			if (a[i] == b[i]) {
				if (cnt0[i] != cnt1[i]) {
					ok = 0;
					break;
				}
				cnt++;
			}
		} else {
			if (a[i] != b[i]) {
				if (cnt1[i] != cnt0[i]) {
					ok = 0;
					break;
				}
				cnt++;
			}
		}
	}
	cout << (ok ? "YES" : "NO") << '\n';

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

