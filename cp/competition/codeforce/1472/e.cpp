#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int n;
array<int, 4> ar[mxN];
 
void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][1] >> ar[i][2];
		ar[i][3] = i;
		ar[i][0] = ar[i][1]*ar[i][2];
	}
	vector<int> ans(n, -1);
	sort(ar, ar+n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ar[j][1] > ar[i][1] && ar[j][2] > ar[i][2] || 
					ar[j][2] > ar[i][1] && ar[j][1] > ar[i][2]) {
				ans[ar[j][3]] = ar[i][3]+1;
			}
		}
		bool done = 0;
		for (int j = 0; j < n; j++) {
			if (ans[j] == -1) {
				done = 1;
				break;
			}
		}
		if (!done) {
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	cout << "\n";
}
 
signed main() {
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
