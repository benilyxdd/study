#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	int x, y;
	cin >> a >> b >> x >> y;
	vector<int> c, d;
	for (int i = 0; i < a; i++) {
		int v;
		cin >> v;
		c.push_back(v);
	}
	for (int i = 0; i < b; i++) {
		int v;
		cin >> v;
		d.push_back(v);
	}

	cout << (c[x-1] < d[d.size()-y] ? "YES\n" : "NO\n");
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


