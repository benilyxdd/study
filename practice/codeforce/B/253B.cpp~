#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 2e5+5;
int ar[mxN], n, dp[mxN][2];

int f(int a, int b, int c) {
	if (ar[a]*2 >= ar[b]) 
		return 0;

	if (dp[a][c] != -1)
		return dp[a][c];

	int temp = min(f(a, b-1, 1), f(a+1, b, 0))+1;
	dp[a][c] = temp;
	return temp;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	sort(ar, ar+n);
	cout << f(0, n-1, 0);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

