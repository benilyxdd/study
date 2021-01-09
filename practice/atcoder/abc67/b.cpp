#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int ar[mxN], n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar, ar+n, greater<int>());
	int cnt = 0;
	for (int i = 0; i < m; i++)
		cnt += ar[i];
	cout << cnt;
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

