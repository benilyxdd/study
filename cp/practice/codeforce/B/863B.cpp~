#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v(2*n);
	for (int i = 0; i < 2*n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < 2; i++) {
		int f = abs(v[0]-v[1]);
		int f2 = abs(v.back() - v[v.size()-2]);
		if (f > f2) {
			v.erase(v.begin());
		} else {
			v.pop_back();
		}
	}
	
	ll ans = 0;
	for (int i = 0; i < v.size(); i+=2) {
		ans += v[i+1] - v[i];
	}
	cout << ans << "\n";
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

