#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int cnt[26] = {0};
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		cnt[a[0]-'a']++;
	}

	int ans = 0;
	for (int i = 0; i < 26; i++) {
		ans += cnt[i]/2;
	}
	cout << ans << "\n";
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


