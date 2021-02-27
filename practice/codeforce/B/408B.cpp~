#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26];

void solve() {
	string a, b;
	cin >> a >> b;
	for (char& x : a) {
		cnt[x-'a']++;
	}

	int ans = 0;
	for (char& x : b) {
		if (cnt[x-'a'] > 0) {
			cnt[x-'a']--;
			ans++;
		}
	}
	cout << (ans == 0 ? -1 : ans);
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

