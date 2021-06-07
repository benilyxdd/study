#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		string s = to_string(i);
		for (char& c : s) {
			temp += c-'0';
		}
		if (temp >= a && temp <= b) {
			ans += i;
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
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

