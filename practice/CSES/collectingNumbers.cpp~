#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, ans = 0;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	
	int pos[n+1];
	pos[0] = 0;
	for (int i = 0; i < n; i++) {
		pos[ar[i]] = i;
	}

	for (int i = 0; i < n; i++) {
		if (pos[i] > pos[i+1]) {
			ans++;
		}
	}
	cout << ans+1;
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

