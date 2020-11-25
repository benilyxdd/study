#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, s;
	cin >> n >> s;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
	  	 v.push_back(a);	
	}
	sort(v.rbegin(), v.rend());
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (s > 0) {
			s -= v[i];
			ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
