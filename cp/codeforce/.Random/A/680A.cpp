#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		sum += a;
		v.push_back(a);
	}

	int x = sum;
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (v[i] == v[j]) {
				x = min(x, sum - 2 * v[i]);
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			for (int k = j + 1; k < 5; k++) {
				if (v[i] == v[j] && v[j] == v[k]) {
					x = min(x, sum - 3 * v[i]);
				}
			}
		}
	}

	cout << x << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
