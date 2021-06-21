#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int ar[mxN], n, k, mem[mxN][mxN], call;

void memdebug() {
	for (int i = 0; i <= k; i++)
		cout << mem[i] << ' ';
	cout << '\n';
}

void input() {
	memset(mem, -1, sizeof(mem));
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
}

int dpver() {
	int dp[k+1][n];
	for (int i = 0; i < n; i++)
		dp[0][i] = 1;

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {
			dp[i][j] = 0;
			if (i-ar[j] >= 0) {
				dp[i][j] += dp[i-ar[j]][j];
			}
			if (j > 0) {
				dp[i][j] += dp[i][j-1];
			}
		}
	}
	return dp[k][n-1];
}

int re(int a, int b) {
	if (b == 0)
		return 1;
	if (b < 0)
		return 0;
	if (a <= 0 && b > 0)
		return 0;
	if (mem[a][b] != -1)
		return mem[a][b];
	call++;

	int ans = 0;
	ans += re(a-1, b);
	ans += re(a, b-ar[a-1]);
	return mem[a][b] = ans;
}

void solve() {
	cout << "dp: " << dpver() << '\n';
	cout << "recursion: " << re(n, k) << "  /calls: " << call << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	input();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

