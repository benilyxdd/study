//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, ar[mxN], dp[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
	   cin >> ar[i];
	
	int mx = 0, inc = ar[0], ne;
	for (int i = 1; i < n; i++) {
		ne = max(mx, inc);
		inc = mx+ar[i];
		mx = ne;
		//inc = mx + ar[i];
		//mx = max(inc-ar[i], mx);
	}
	cout << max(mx, inc);
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


