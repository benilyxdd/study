#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a[51][51], n, k, p;
int dp[51][51];

void solve() {
	cin >> n >> k >> p;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++) 
			cin >> ar[i][j];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			dp[i][j] = 0

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
