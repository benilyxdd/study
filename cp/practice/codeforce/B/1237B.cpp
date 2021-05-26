#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int n, a[mxN], b[mxN];
bool went[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	int ans = 0;
	for (int i = 0, j = 0; i < n; i++) {
		while(went[a[j]] == 1) {
			j++;
		}
		if (b[i] != a[j] && went[b[i]] == 0) {
			went[b[i]] = 1;
			ans++;
		} else if (b[i] == a[j]) {
			j++;
		}
	}
	cout << ans;
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

