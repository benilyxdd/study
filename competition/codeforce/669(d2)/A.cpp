#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int a = 0, b = 0;
	int pos = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2) {
			sum -= v[i];
		} else {
			sum += v[i];
		}
	}
	
	while(sum != 0) {
		auto it = find(v.rbegin(), v.rend(), 1);
		v.erase(it);
		sum = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2) {
				sum -= v[i];
			} else {
				sum += v[i];
			}
		}
	}

	cout << v.size() << "\n";
	for (auto x : v) {
		cout << x << " ";
	}
	cout << "\n";


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
