#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define INF 1e18
void solve() {
	int n;
	vector<ll> v;
	cin >> n;
	v.push_back(-INF);
	for (int i = 0; i < n ; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	v.push_back(INF);
	for (int i = 1; i <= n; i++) {
		int mn = min(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
		cout << mn << " ";
		int mx = max(abs(v[i]-v[n]), abs(v[i]-v[1]));
		cout << mx << "\n";
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


