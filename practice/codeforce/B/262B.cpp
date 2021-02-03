#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN], n, k;

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	sort(ar, ar+n);

	int i;
	for (i = 0; i < n && k > 0; i++, k--) {
		if (ar[i] > -1) {
			break;
		}
		ar[i] = abs(ar[i]);
	}
	
	if (k > 0) {
		sort(ar, ar+n);
		if (k&1) {
			ar[0] = ar[0]*-1;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += ar[i];
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

