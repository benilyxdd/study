#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, ar[mxN], a, b, rar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		ar[a] = max(ar[a], b);
	}
	for (int i = 0; i < mxN; i++) {
		if (ar[i] != 0) {
			rar[ar[i]] = i;
		}
	}
	int mx = mxN;
	for (int i = mxN-1; i >= 0; i--) {
		if (rar[i] != 0) {
			if (rar[i] > mx) {
				cout << "Happy Alex\n";
				return;
			}
			mx = min(mx, rar[i]);
		}
	}
	cout << "Poor Alex\n";
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


