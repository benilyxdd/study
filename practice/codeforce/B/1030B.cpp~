#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, d, m, x, y;

void solve() {
	cin >> n >> d >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;

		bool ok = 0;
		if(x+y >= d && 2*n-d <= x+y) 
			ok = 1;
		if(x-y >= -d && d >= x-y)
			ok = 1;
		
		cout << (ok ? "YES" : "NO") << "\n";
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

