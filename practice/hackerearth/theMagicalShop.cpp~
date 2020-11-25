#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, ans = 0;
	cin >> a >> b;
	string s;
	cin >> s;
	ll x = a;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1') {
			ans = (ans+x)%b;
		} 
		x = (x*x)%b;
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

