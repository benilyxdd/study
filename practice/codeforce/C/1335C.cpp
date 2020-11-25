#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, cnt[20001] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cnt[a]++;
	}
	
	int mx = 0;
	for (int i = 0; i < 20001; i++) {
		mx = max(cnt[i], mx);
	}
	cout << mx-1 << "\n";
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

