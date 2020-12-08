#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n;

void solve() {
	while(cin >> n && n != 0) {
		string s = to_string(n);
		while(s.length() != 1) {
			int ans = 0;
			for (char& x : s) {
				ans += x-'0';
			}
			s = to_string(ans);
		}
		cout << s << "\n";
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


