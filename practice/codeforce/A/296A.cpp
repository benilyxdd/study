#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int ar[mxN], n, cnt[mxN], mx;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		mx = max(mx, ++cnt[ar[i]]);
	}
	cout << (mx > (n+2-1)/2 ? "NO" : "YES");
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


