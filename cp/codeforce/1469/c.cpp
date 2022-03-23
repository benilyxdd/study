#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
in ar[mxN], n, k;

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int h = ar[0]+k;
	for (int i = 1; i < n; i++) {
		if (ar[i] >= ar[i-1]) {
			h = min(h+k-1, ar[i]+k-1);;
			if (h < ar[i]) {
				cout << "NO\n";
				return;
			}
		} else {
		
		}
	}
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

