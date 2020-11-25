#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	bool a = false;
	for (int i = 0; i < n; i++) {
		if(a) {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
				s[i] = '1';
				a = true;
			} else {
				a = false;
			}
		} else {
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
				a = true;
			} else {
				a = false;
			}
		}
	}
	for (char x : s) {
		if (x != '1') {
			cout << x;
		}
	}
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
