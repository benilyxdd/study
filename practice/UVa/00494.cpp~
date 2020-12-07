#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	while(getline(cin, s)) {
		int ans = 0;
		bool tf = 1;
		for (char& x : s) {
			if (x >= 'a' && x <= 'z'|| x >= 'A' && x <= 'Z') {
				if (tf) {
					tf = 0;
					ans++;
				}
			} else {
				tf = 1;
			}
		}
		
		cout << ans << "\n";
	}
}

int main() {
	ios::sync_with_stdio(1);
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


