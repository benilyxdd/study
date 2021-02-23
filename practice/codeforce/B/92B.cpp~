#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	reverse(s.begin(), s.end());

	int cnt = 0, len = s.length();
	for (int i = 0;;) {
		if (i >= len-1) {
			break;
		}
		cnt++;
		if (s[i] == '0') {
			i++;
		} else {
			int j = i;
			while(s[j] == '1') {
				if (s[j+1] == '0') {
					s[j+1] = '1';
					break;
				} else {
					s[j+1] = '0';
					j++, cnt++;
				}
			}
			i++;
		}
	}
	cout << cnt << '\n';
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

