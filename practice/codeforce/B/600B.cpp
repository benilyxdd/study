#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b;
	vector<int> xd, xdd;
	for (int i = 0; i < a; i++) {
		cin >> c;
		xd.push_back(c);
	}
	for (int i = 0; i < b; i++) {
		cin >> c;
		xdd.push_back(c);
	}
	sort(xd.begin(), xd.end());
	
	for (int i = 0; i < b; i++) {
		auto it = upper_bound(xd.begin(), xd.end(), xdd[i]);
		int dis = distance(xd.begin(), it);
		cout << dis << " ";
	}
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

