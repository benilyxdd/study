#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
vector<int> ar[mxN];
int n, size[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < a; j++) {
			int b;
			cin >> b;
			ar[i].push_back(b);
		}
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		sort(ar[i].rbegin(), ar[i].rend());
	}
	sort(ar, ar+n);
	for (int i = 0; i < n; i++) {
		size[i] = ar[i].size();
	}

	for (int i = 0; i < n-1; i++) {
		int f = *max_element(ar[i].begin(), ar[i].end());
		int s = *max_element(ar[i+1].begin(), ar[i+1].end());

		ans += (s-f)*size[i];
		size[i+1] += size[i];
	}
	cout << ans;

	/*
	for (int i = 0; i < n; i++) {
		cout << "Size: " << size[i] << ',';
		for (int& x : ar[i]) {
			cout << x << ' ';
		}
		cout << '\n';
	}
	*/
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


