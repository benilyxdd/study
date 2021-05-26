#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int INF = (int)1e17;
const int mxN = (int)1e5+5;
int n, f;
array<int, 2> ar[mxN];

bool cmp(array<int, 2>& a, array<int, 2>& b) {
	int x = a[0]*2, x2 = b[0]*2;
	int y = min(x, a[1])-a[0], y2 = min(x2, b[1])-b[0];
	return y > y2;
}

void solve() {
	cin >> n >> f;
	for (int i = 0; i < n; i++) 
		cin >> ar[i][0] >> ar[i][1];
	sort(ar, ar+n, cmp);

	for (int i = 0; i < f; i++) {
		ar[i][0] *= 2;
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += min(ar[i][0], ar[i][1]);
	}
	cout << cnt;
}

signed main() {
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

