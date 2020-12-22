#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		cin >> c;
		v.push_back(c);
	}

	int first = v[0];
	cout << 1 << " ";
	for (int i = 1; i < a; i++) {
		if (v[i] + first != b) {
			cout << 1 << " ";
		} else {
			cout << 0 << " ";
		}
	}
	cout << "\n";
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

