#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a;

void solve() {
	cin >> a;
	a = (a*567/9+7492)*235/47-498;
	string s = to_string(a);
	cout << s[s.length()-2] << "\n";
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


