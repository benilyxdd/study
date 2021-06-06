#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(2 * n);
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		ans.push_back(ar[i]);
		ans.push_back(ar[n + i]);
	}

	for (int &x : ans) {
		cout << x << ' ';
	}
	cout << '\n';
}

int main() {
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

