#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int n, k, ar[mxN], pre[mxN];
string s;

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	cin >> s;

	pre[0] = 0;
	pre[1] = ar[0];
	for (int i = 2; i <= n; i++) {
		pre[i] = pre[i-1]+ar[i-1];
	}
	for (int i = 0; i <= n; i++) 
		cout << pre[i] << ' ';
	cout << '\n';

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x = i, temp = 1;
		while(s[i+1] == s[i]) {
			i++;
			temp++;
		}
		if (temp > k) {
			int mx = 0;
			//cout << i << ' ' << x << '\n';
			for (int j = 0; j <= temp-k; j++) {
				int temp2 = pre[x+k+j]-pre[x+j];
				cout << temp2 << ' ';
				mx = max(temp2, mx);
			}
			ans += mx;
		} else {
			ans += pre[i+1]-pre[x];
		}
		//cout << x << ' ' << temp << '\n';
	}
	//cout << ans;
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

