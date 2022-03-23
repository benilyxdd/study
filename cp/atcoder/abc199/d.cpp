#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> ar(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
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

