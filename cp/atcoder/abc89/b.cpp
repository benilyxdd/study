#include <bits/stdc++.h>

using namespace std;

#define ll long long

int cnt[5];
void solve() {
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s[0] == 'M') {
			cnt[0]++;
		} else if (s[0] == 'A') {
			cnt[1]++;
		} else if (s[0] == 'R') {
			cnt[2]++;
		} else if (s[0] == 'C') {
			cnt[3]++;
		} else if (s[0] == 'H') {
			cnt[4]++;
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

