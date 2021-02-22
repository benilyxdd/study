#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int n, ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int ans[n], mx = 0;
	for (int i = n-1; i >= 0; i--) {
		ans[i] = max(mx-ar[i]+1, 0);
		//if (ar[i] > mx) {
			//ans[i] = 0;
		//} else {
			//ans[i] = mx-ar[i]+1;
		//}
		mx = max(ar[i], mx);
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
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

