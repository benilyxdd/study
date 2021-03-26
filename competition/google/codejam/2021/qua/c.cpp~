#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, c;
	cin >> n >> c;

	int largest = n*(n+1)/2-1;

	if (c > largest || c < n-1) {
		cout << "IMPOSSIBLE\n";
	} else {
		vector<int> ar(n);
		for (int i = 0; i < n; i++) {
			ar[i] = i+1;
		}

		int first = 0, last = n, left = n-2, tf = 0;
		while (c > 0) {
			int cnt = max(c-left, 0);
			int how = min(cnt, last-first);
			reverse(ar.begin()+first, ar.begin()+how+first);
			if (tf&1) {
				first++;
			} else {
				last--;
			}
			left--, tf++;
			c -= how;
		}

		for (int& x : ar) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("t3.txt", "w", stdout);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

