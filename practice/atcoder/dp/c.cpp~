#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int dp[mxN][4], n;
array<int, 3> ar[mxN];

int f(int day, int last) {
	if (day == n)
		return 0;
	if (dp[day][last] != -1)
		return dp[day][last];
	
	int s = 0;
	for (int i = 0; i < 3; i++) {
		if (i != last) {
			s = max(s, ar[day][i]+f(day+1, i));
		}
	}
	return dp[day][last] = s;
}

void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1] >> ar[i][2];

	cout << f(0, 3) << "\n";
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

