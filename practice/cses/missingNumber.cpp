#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int n, ar[mxN], sum;

void solve() {
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> ar[i];
		sum += ar[i];
	}
	int x = n*(n+1)/2;
	cout << x-sum;
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

