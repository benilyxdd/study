#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, ans, cnt[26];
string s;

void solve() {
	cin >> n >> s;
	for (int i = 0; i < 2*n-2; i++) {
		if (i&1) {
			int& key = cnt[s[i]-'A'];
			if (key) {
				key--;
			} else {
				ans++;
			}
		} else {
			cnt[s[i]-'a']++;
		}
	}
	cout << ans;
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


