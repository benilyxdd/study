#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n, q;

void solve() {
	int cnt = 0;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt += ar[i];
	}
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 2) {
			if (cnt >= b) {
				cout << 1 << '\n';
			} else {
				cout << 0 << '\n';
			}
		} else {
			if (ar[b-1] == 1) {
				cnt--;
			} else {
				cnt++;
			}
			ar[b-1] = 1-ar[b-1];
		}
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

