#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
array<int, 2> ar[mxN];
int a, n, x;

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ar[i] = {a, i+1};
	}
	sort(ar, ar+n);

	for (int i = 0, j = n-1; i < j;) {
		int s = ar[i][0]+ar[j][0];
		if (s == x) {
			cout << ar[i][1] << " " << ar[j][1] << "\n";
			return;
		} else {
			if (s >= x) {
				j--;
			} else {
				i++;
			}
		}
	}
	cout << "IMPOSSIBLE\n";
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

