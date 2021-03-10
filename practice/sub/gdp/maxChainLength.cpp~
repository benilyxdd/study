#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
array<int, 2> ar[mxN];
int n, dp[mxN];

bool cmp(array<int, 2>& a, array<int, 2>& b) {
	if (a[0] == b[0])
		return a[1] < b[1];
	return a[0] < b[0];
}

bool cmp2(array<int, 2>& a, array<int, 2>& b) {
	if (a[0] == b[0])
		return a[1] > b[1];
	return a[0] > b[0];
}

void debug() {
	cout << "dp[] : \n";
	for (int i = 0; i < n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
	cout << "ar[] : \n";
	for (int i = 0; i < n; i++) 
		cout << ar[i][0] << ' ' << ar[i][1] << '\n';
	cout << '\n';
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1];
	sort(ar, ar+n, cmp);

	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (ar[i][0] > ar[j][1]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}	
	//debug();
	int ans = *max_element(dp, dp+n);
	cout << ans << '\n';
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

