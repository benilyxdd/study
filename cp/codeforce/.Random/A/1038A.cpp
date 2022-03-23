#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	char c;
	cin >> a >> b;
	int cnt[26];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < a; i++) {
		cin >> c;
		cnt[c-'A']++;
	}

	int mn = cnt[0];
	for (int i = 0; i < b; i++) {
		mn = min(mn, cnt[i]);
	}
	cout << mn*b << "\n";
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


