#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000;
int n, k, mn, mx;
array<int, 2> ar[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
		mn += ar[i][0];
		mx += ar[i][1];
	}

	if (mn > k || mx < k) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	vector<int> ans;
	for (int i = 0; i < n; i++) 
		ans.push_back(ar[i][0]);

	int left = k-mn;
	for (int i = 0, j = 0; i < left; i++) {
		if (ans[j] == ar[j][1]) {
			j++;
			i--;
		} else {
			ans[j]++;
		}
	}
	for (int& x : ans) {
		cout << x << " ";
	}
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

