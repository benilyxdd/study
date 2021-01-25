#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int a[mxN], b[mxN], n, m;
int cnt[20000];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x = a[i], y = b[j];
			if (x < y) 
				swap(x, y);
				
			if (x%y == 0) {
				cnt[(x/y)]++;
			}
		}
	}
	int mx = 0;
	for (int i = 0; i < 20000; i++) {
		//cout << cnt[i] << " ";
		if (cnt[i] != 0) {
			mx = max(mx, cnt[i]);
		}
	}
	cout << mx;
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


