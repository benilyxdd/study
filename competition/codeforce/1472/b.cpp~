#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[3], n, a;

void solve() {
	memset(cnt, 0, sizeof(cnt));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cnt[a]++;
	}
	if (cnt[1]&1 || cnt[2]&1 && cnt[1]&1 || cnt[2]&1 && cnt[1] == 0) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

