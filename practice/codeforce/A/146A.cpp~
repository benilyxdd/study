#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < 10; i++) {
		if (i != 4 && i != 7) {
			auto temp = s.find('0'+i);
			if (temp != string::npos) {
				cout << "NO\n";
				return;
			}
		}
	}

	int f = 0, l = 0;
	for (int i = 0; i < n/2; i++) {
		f += s[i] - '0';
	}
	for (int i = n/2; i < n; i++) {
		l += s[i] - '0';
	}
	cout << (f == l ? "YES" : "NO") << "\n";
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
