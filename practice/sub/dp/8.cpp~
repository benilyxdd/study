#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mem[1000], call;

int f(int n) {
	if (mem[n] != -1)
		return mem[n];
	
	call++;
	if (n == 0 || n == 1 || n == 2)
		return n;

	int ans = 0;
	ans += f(n-1)+f(n-2);
	
	return mem[n] = ans;
}

void solve() {
	int n;
	cin >> n;
	//top-down
	memset(mem, -1, sizeof(mem));
	cout << f(n) << " call: " << call << "\n";

	//bottom-up
	int dp[n+1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i-1]+dp[i-2];
	}
	cout << dp[n];
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

