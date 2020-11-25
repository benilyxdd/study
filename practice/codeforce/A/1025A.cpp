#include <bits/stdc++.h>

using namespace std;

#define ll long long

int cnt[26];

void solve() {
	int n;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		cnt[c-'a']++;
	}
	
	if (n == 1) {
		cout << "Yes\n";
		return;
	}
	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 2) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
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


