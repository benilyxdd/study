#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const ll MAX = (ll)1e13;
pair<int, int> a[3001];
ll dp[3001][3001];
int n;

int f(int pos, int pre) {
	if (pos > n) 
		return 0;
	
	if (dp[pos][pre] != -MAX) 
		return dp[pos][pre];

	return dp[pos][pre] = min(f(pos+1, pos)+a[pos].second, f(pos+1, pre)+abs(a[pos].first-a[pre].first));
}

void solve() {
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;
	
	sort(a, a+n);
	for (int i = 0; i < 3001; i++) {
		for (int j = 0; j < 3001; j++) {
			dp[i][j] = -MAX;
		}
	}

	cout << f(1, 0)+a[0].second << "\n";
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

