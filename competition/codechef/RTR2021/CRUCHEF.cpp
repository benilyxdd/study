#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	vector<int> ar(100000, 0);
	int x;
	while (cin >> x) {
		ar[x]++;
	}

	sort(ar.rbegin(), ar.rend());
	int mn = ar[0];
	for (int i = 0; i < n; i++) {
		mn = min(ar[i], mn);
	}
	cout << mn << '\n';
}

int main() {
	ios::sync_with_stdio(1);
	cin.tie(0);
	// freopen("CURCHEF_input.txt", "r", stdin);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

