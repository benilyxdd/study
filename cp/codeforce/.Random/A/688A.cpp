#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int ans = 0;
	int temp = 0;
	for (int i = 0; i < b; i++) {
		string s;
		cin >> s;
		if (s.find('0') == string::npos) {
			temp = 0;
		} else {
			temp++;
		}
		if (temp > ans) {
			ans = temp;
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
