#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll a, b; cin >> a >> b;
	for (int i = 0; i < b-1; i++) {
		string s = to_string(a);
		ll mx = *max_element(s.begin(), s.end()) - '0';
		ll mn = *min_element(s.begin(), s.end()) - '0';
		a = a+mx*mn;
	}
	cout << a << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


