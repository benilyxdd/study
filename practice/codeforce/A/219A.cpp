#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int cnt[26] = {0};
	string s;
	cin >> s;
	for (char& c : s) {
		cnt[c-'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (cnt[i] != 0 && cnt[i]%n != 0) {
			cout << -1 << "\n";
			return;
		}
	}
	string s1;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > 0) {
			for (int j = 0; j < cnt[i]/n; j++) {
				s1 += (char)i+97;
			}
		}
	}
	while(n--) {
		cout << s1;
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


