#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	ll ans = 0;
	vector<ll> o;
	while(n--) {
		int a;
		cin >> a;
		if (a % 2) {
			o.push_back(a);
		} else {
			ans += a;
		}
	}
	if (o.size() == 0) {
		cout << ans << "\n";
		return;
	}
	sort(o.rbegin(), o.rend());
	for (int i = 0; i < o.size()-1; i+=2) {
		ans += o[i];
		ans += o[i+1];
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


