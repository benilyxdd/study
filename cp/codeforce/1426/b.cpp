#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int z, x, c, d;
	vector<vector<int>> vv;
	for (int i = 0; i < a; i++) {
		vector<int> v;
		cin >> z >> x >> c >> d;
		v.push_back(z);
		v.push_back(x);
		v.push_back(c);
		v.push_back(d);
		vv.push_back(v);
	}

	if (b%2) {
		cout << "NO\n";
		return;
	}
	
	for (vector<int> xd : vv) {
		if (xd[1] == xd[2]) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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

