#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n1, n2, k1, k2;
int dp[101][101][11][11];
const int MOD = 100000000;

int f(int a, int b, int c, int d) {
	if (a+b == 0) 
		return 1;
	
	if (dp[a][b][c][d] != -1) 
		return dp[a][b][c][d];
	
	int x = 0, y = 0;
	if (a > 0 && c > 0) {
		x = f(a-1, b, c-1, k2);
	}
	if (b > 0 && d > 0) {
		y = f(a, b-1, k1, d-1);
	}
	return dp[a][b][c][d] = (x+y)%MOD;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n1 >> n2 >> k1 >> k2;
	cout << f(n1, n2, k1, k2) << "\n";
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


