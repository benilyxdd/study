#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 5005;
set<int> x, y, z;
int n, m, k, a, b;

void input() {
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		x.insert(temp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		y.insert(temp);
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> temp;
		z.insert(temp);
	}
	cin >> a >> b;
}

void solve() {
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	input();
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

