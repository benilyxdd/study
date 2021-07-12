#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<array<ll, 2>> question(n);
	for (int i = 0; i < n; i++) {
		cin >> question[i][0] >> question[i][1];
	}
	for (int i = 0; i < m; i++) {
		ll student;
		cin >> student;
		
	}
}

int main() {
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

