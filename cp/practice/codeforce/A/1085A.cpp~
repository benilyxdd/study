#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string a;
	cin >> a;
	string ans;
	int n = a.length();
	if (n % 2) {
		for (int i = 0; i < n/2; i++) {
			ans += a[i];
			ans += a.back();
			a.pop_back();
		}
		ans += a[n/2];
	} else {
		for (int i = 0; i < n/2; i++) {
			ans += a.back();
			a.pop_back();
			ans += a[i];
		}
	}
	reverse(ans.begin(), ans.end());
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
