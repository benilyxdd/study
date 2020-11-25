#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	string b;
	cin >> a >> b;
	int o = 0;
	string ans;
	for (int i = 0; i < a; i++) {
		if ((b[i]-'0')%2 == 1) {
			o++;
			if (ans.length() < 2) {
				ans+=b[i];
			}
		}
	}
	if (o <= 1) {
		cout << -1 << "\n";
	} else {
		cout << ans << "\n";
	}
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


