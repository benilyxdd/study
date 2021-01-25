#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)101;
int n, k;
array<int, 2> ar[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0];
		ar[i][1] = i+1;
	}

	sort(ar, ar+n);
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		if (ar[i][0] <= k) {
			k -= ar[i][0];
			ans.push_back(ar[i][1]);
		}
	}
	cout << ans.size() << "\n";
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


