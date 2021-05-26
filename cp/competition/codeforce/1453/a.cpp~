#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int a, n, m;
bool ar[mxN];

void solve() {
	memset(ar, false, sizeof(ar));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ar[a] = 1;	
	}
	
	int ans = 0;
	for (int i = 0; i < m; i++) {
		cin >> a;
		if (ar[a] == 1) {
			ans++;
		}
	}
	cout << ans << "\n";
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

