#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	

	string s = to_string(n);
	string f = s.substr(0, s.length()/2);
	string f2 = s.substr(s.length()/2);

	if (s.length()&1) {
		cout << 0;
		return;
	}

	int x = stoll(f);
	int y;
	if (f2[0] == '0') {
		for (int i = 1; i < f2.length(); i++) {
			f2[i] = '9';
		}
	}
	y = stoll(f2);

	cout << min(x, y);
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

