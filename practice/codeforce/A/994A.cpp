#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	vector<int> v, v1;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
	}

	for (int i = 0; i < a; i++) {
		auto it = find(v1.begin(), v1.end(), v[i]);
		if (it != v1.end()) {
			cout << v[i] << " ";
		}
	}
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
