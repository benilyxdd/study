#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	/*
	int cnt[26];
	memset(cnt, 0, sizeof(cnt));
	for (char& ch : s) {
		cnt[ch - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			cout << char(i + 'a');
		}
	}
	cout << '\n';
	*/
	sort(s.begin(), s.end());
	cout << s << '\n';
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

