#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 1e5+5;
int n, a, b, ar[mxN];

void solve() {
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		int x = ar[i]*a/b;
		int temp = x*b;
		int y = (temp+a-1)/a;
		cout << ar[i]-y << " ";
	}
}

signed main() {
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

