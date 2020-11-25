#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	vector<int> x(v.begin(), v.end());
	sort(v.rbegin(), v.rend());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += v[i]*i+1;
	}
	cout << ans << "\n";
	for (int i = 0; i < n; i++) {
		auto it = find(x.begin(), x.end(), v[i]);
		ans = distance(x.begin(), it);
		x[ans] = 1001;
		cout << ans+1 << " ";
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

