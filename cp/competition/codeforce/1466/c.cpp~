#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (i+1 < len) {
			if (s[i] == s[i+1]) {
				s[i+1] = '!';
			}
		}
		if (i+2 < len) {
			if (s[i] == s[i+2]) {
				s[i+2] = '!';
			}
		}
	}
	for (int i = 0; i < len; i++) 
		if (s[i] == '!')
			cnt++;
	//cout << s << "\n";
	cout << cnt << "\n";
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

