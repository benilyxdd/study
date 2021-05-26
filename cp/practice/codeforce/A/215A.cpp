#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int a[mxN], b[mxN], n, m;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	
	int mx = 0;	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i]%a[j] == 0) {
				mx = max(mx, b[i]/a[j]);		
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i]/a[j] == mx && b[i]%a[j] == 0) {
				cnt++;
			}
		}
	}
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


