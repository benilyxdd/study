#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 10000;
int dp[mxN], dp2[mxN], call, call2, n, ar[mxN];

//top-down1;
int f(int now) {
	if (now > n) 
		return 0;
	if (now == n)
		return 1;
	if (dp[now] != -1)
		return dp[now];
	call++;

	int ans = 0;
	ans += f(now+3);
	ans += f(now+5);
	ans += f(now+10);
	return dp[now] = ans;
}

//top-down2;
int f2(int k) {
	if (k < 0)
		return 0;
	if (k == 0)
		return 1;
	if (dp2[k] != -1)
		return dp2[k];
	call2++;

	int ans = 0;
	ans += f2(k-3);
	ans += f2(k-5);
	ans += f2(k-10);
	return dp2[k] = ans;
}


void solve() {
	//input
	cin >> n;
	//top-down
	memset(dp2, -1, sizeof(dp2));
	memset(dp, -1, sizeof(dp));
	cout << f(0) << " call: " << call << "\n";
	cout << f2(n) << " call: " << call2 << "\n";
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

