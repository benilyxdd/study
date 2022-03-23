#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n, k;

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int mn = INT_MAX, pos = -1;
	for (int i = 0; i < k; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j += k) {
			cnt += ar[i+j];
		}
		if (cnt < mn) {
			mn = cnt;
			pos = i;
		}
	}
	cout << pos+1;
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

