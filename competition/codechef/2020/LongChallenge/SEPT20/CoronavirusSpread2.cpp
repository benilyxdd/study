#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	int mx = 0;
	for (int i = 0; i < n; i++) {
		int temp = 1;
		for (int j = i+1; j < n; j++) {
			if (v[i] > v[j]) {
				temp++;
			}
			if (temp > mx) {
				mx = temp;
			}
		}
	}

	int mn = 999;
	for (int i = 0; i < n; i++) {
		int temp = n;
		for (int j = i+1; j < n; j++) {
			if (v[i] <= v[j]) {
				temp--;
			}
		}
		if (temp < mn) {
			mn = temp;
		}
	}

	cout << mn << " " << mx << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
