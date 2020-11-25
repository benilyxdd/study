#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = (int)1e5+5;
bool dp[N];

void solve() {
	int a, b, c, d, e;
	cin >> a >> b >> c;
	vector<int> v;
	memset(dp, false, sizeof(dp));
	for (int i = 0; i < a; i++) {
		cin >> d;
		v.push_back(d);
	}
	

	while(c--) {
		cin >> d >> e;
		cout << (dp[d]&&dp[e] ? "Yes" : "No") << "\n";
	}
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

