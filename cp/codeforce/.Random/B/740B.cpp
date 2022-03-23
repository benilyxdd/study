#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int ar[mxN], cnt[mxN];
int n, m, pre[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	pre[0] = 0;
	for (int i = 1; i <= n; i++)
		pre[i] = ar[i-1]+pre[i-1];

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		if (pre[b]-pre[a-1] > 0) {
			for (int j = a; j <= b; j++) {
				cnt[j-1]++;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += cnt[i]*ar[i];
	}
	cout << ans;
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

