#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int mx = 0;
	string s;
	while(cin >> s) {
		int temp = 0;
		for (int i = 0; i < s.length(); i++) {
			if (isupper(s[i])) {
				temp++;
			}
		}
		if (temp > mx) {
			mx = temp;
		}
	}
	cout << mx << "\n";
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
