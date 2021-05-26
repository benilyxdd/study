#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int ar[mxN], n, cnt[101];

void solve() {
	memset(cnt, 0, sizeof(cnt));

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
	}

	for (int i = 0; i < 101; i++) {
		if (cnt[i] > 0) {
			cout << i << ' ';
		}
	}	

	for (int i = 0; i < 101; i++) {
		if (cnt[i] > 1) {
			for (int j = 0; j < cnt[i]-1; j++) {
				cout << i << ' ';
			}
		}
	}
	cout << '\n';
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

