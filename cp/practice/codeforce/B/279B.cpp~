#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ar[mxN], n, m, pre[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	pre[0] = 0;
	pre[1] = ar[0];
	for (int i = 2; i <= n; i++) 
		pre[i] = pre[i-1]+ar[i-1];

	int mx = 0;
	for (int i = 0, j = 0; i < n; i++) {
		if (pre[j+1]-pre[i] <= m) {
			while(pre[j+2]-pre[i] <= m && j+2 <= n) {
				j++;
			}
			mx = max(mx, j-i+1);
		}
	}
	cout << mx;
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

