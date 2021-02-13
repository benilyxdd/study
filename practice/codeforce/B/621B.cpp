#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1005;
int n, x, y;
vector<int> a[mxN], b[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a[x].push_back(i);
		b[y].push_back(i);
	}

	for (int i = 0; i <= 5; i++) {
		cout << a[i].size() <<  " " << b[i].size() << "\n";
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

