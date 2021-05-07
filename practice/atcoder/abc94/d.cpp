#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	sort(ar.begin(), ar.end());
	vector<int> diff(n - 1);
	int mid = ar[n - 1] / 2;
	for (int i = 0; i < n - 1; i++) {
		diff[i] = min(abs(ar[i] - mid), abs(ar[i] - (mid + 1)));
	}
	int mn = 1e9, pos = -1;
	for (int i = 0; i < n - 1; i++) {
		if (mn > diff[i]) {
			mn = diff[i];
			pos = i;
		}
	}
	cout << ar[n - 1] << ' ' << ar[pos] << '\n';
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

