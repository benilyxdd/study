#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	int cnt = 0, i = 0;
	while (ar[i] <= m) {
		m -= ar[i];
		i++, cnt++;
	}
	cout << cnt << '\n';
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

