#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n + 2, -1);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	vector<int> diff(n - 1);
	for (int i = 1; i < n; i++) {
		diff[i - 1] = ar[i] - ar[i - 1];
	}

	for (int& x : diff) {
		cout << x << ' ';
	}
	cout << '\n';

	int mx = 2, temp = 1;
	for (int i = 1; i < n - 1; i++) {
		if (diff[i] == diff[i - 1]) {
			while (diff[i] == diff[i - 1] && i < n - 1) {
				temp++, i++;
			}
			mx = max(temp, mx);
			cout << "I: " << i << '\n';
			int save = ar[i + 1];
			ar[i + 1] = ar[i] + diff[i - 1];
			if (i + 1 != n - 1 && ar[i + 1] - ar[i + 2] == diff[i - 1]) {
				temp++;
				mx = max(mx, temp);
				ar[i + 1] = save;
			} else {
				temp = 1;
			}
			i += 2;
		}  else {
			int save = ar[i + 1];
			ar[i + 1] = ar[i] + diff[i - 1];
			if (i + 1 != n - 1 && ar[i + 1] - ar[i + 2] == diff[i - 1]) {
				temp++;
				mx = max(mx, temp);
				ar[i + 1] = save;
			} else {
				temp = 1;
			}
			i += 2;
		}
	}
	for (int& x : ar) {
		cout << x << ' ';
	}
	cout << '\n';
	cout << mx + 1 << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

