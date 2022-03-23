#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int n, x;
int a[mxN];

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	sort(a, a+n);

	int ans = 0;
	for (int i = 0, j = n-1; i <= j;) {
		if (a[i]+a[j] <= x) {
			ans++;
			i++, j--;
		} else {
			ans++;
			if (a[i] <= a[j]) {
				j--;
			} else {
				i++;
			}
		}
	}
	cout << ans << "\n";
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

