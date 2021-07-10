#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(n, INT_MAX);
	vector<array<int, 2>> air(k);
	for (int i = 0; i < k; i++) {
		cin >> air[i][0];
		air[i][0]--;
	}
	for (int i = 0; i < k; i++) {
		cin >> air[i][1];
	}
	for (int i = 0; i < k; i++) {
		int cell = air[i][0];
		int temp = air[i][1];
		ar[cell] = min(ar[cell], temp);
		for (int j = cell, jump = 0; j >= 0; j--, jump++) {
			if (j - 1 >= 0 && ar[j - 1] > temp + jump + 1) {
				ar[j - 1] = temp + jump + 1;
			} else {
				break;
			}
		}
		for (int j = cell, jump = 0; j < n; j++, jump++) {
			if (j + 1 < n && ar[j + 1] > temp + jump + 1) {
				ar[j + 1] = temp + jump + 1;
			} else {
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ar[i] << ' ';
	}
	cout << '\n';
}

int main() {
	// freopen("input5.txt", "r", stdin);
	// freopen("output5.txt", "w", stdout);
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

