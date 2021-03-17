//https://www.geeksforgeeks.org/sum-of-all-substrings-of-a-string-representing-a-number/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;
const int mxN = (int)1e5;
ll dp[mxN];

void solve() {
	string a;
	cin >> a;
	long long n = a.length();

	long long ans = 0;
	long long mf = 1;
	for (long long i = n-1; i >= 0; i--) {
		ans = (ans+ (a[i]-'0')*(i+1)*mf)%MOD;
		mf = mf*10+1;
	}
	cout << ans;
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

