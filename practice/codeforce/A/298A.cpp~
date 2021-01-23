#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
string s;

void solve() {
	cin >> n >> s;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			cnt1++;
		} else if (s[i] == 'L') {
			cnt2++;
		}
	}
	if (cnt1 == 0) {
		for (int i = 0; i < n; i++) {
			if (s[i] == 'L') {
				int save = i;
				while(s[i] == 'L') {
					i++;
				}
				cout << i << " " << save;
				return;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (s[i] != s[i+1] && (s[i] == 'R' || s[i] == 'L')) {
			cout << i+1 << " " << i+2 << "\n";
			return;
		}
	}
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


