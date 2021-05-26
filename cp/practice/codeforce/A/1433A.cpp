#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<pair<int, int>> v;

void f() {
	for (int i = 1; i <= 9; i++) {
		v.push_back({i, 1});
		v.push_back({i*10+i, 2});
		v.push_back({i*100+i*10+i, 3});
		v.push_back({i*1000+i*100+i*10+i, 4});
	}
}

void solve() {
	int n;
	cin >> n;
	int ans = 0;
	for (pair<int ,int>& x : v) {
		if (n != x.first)
			ans += x.second;
		else {
			ans += x.second;
			break;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	f();

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


