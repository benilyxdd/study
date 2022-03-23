#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar;
	for (int i = 0; i < n; i++) {
		ar.push_back(i + 1);
	}
	for (int i = 0; i < n - 1; i += 2) {
		swap(ar[i], ar[i + 1]);
	}
	if (n & 1) {
		swap(ar[n - 1], ar[n - 2]);
	}
	for (int &x : ar) {
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

