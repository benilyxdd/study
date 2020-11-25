#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 100001;
int dp[N];
bool xd[N];

void sieve() {
	memset(xd, true, sizeof(xd));
	for (int i = 2; i < N; i++) {
		if (xd[i]) {
			for (int j = i; j <= N; j+=i) {
				dp[j]++;
				xd[j] = false;
			}
		}
	}
}

void solve() {
	int a, b, c, ans = 0;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (dp[i] == c) {
			ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	sieve();
	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

