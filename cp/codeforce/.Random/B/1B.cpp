#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int cnt = 0, len = s.length();
	for (int i = 0; i < len; i++) {
		if (isalpha(s[i])) {
			cnt++;
			while(isalpha(s[i])) {
				i++;
			}
		}
	}
	if (cnt == 1) {

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

