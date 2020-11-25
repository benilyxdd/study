#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		int temp = 0;
		for (int j = 0; j < s.length(); j++){
			if (s[j] == '4' || s[j] == '7') {
				temp++;
			}
		}
		if (temp <= b) {
			ans++;
		}
	}
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
