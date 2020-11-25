#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> cnt(100001, 0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cnt[a]++;
		cnt[a+1]++;
		if (a > 0) {
			cnt[a-1]++;
		}
	}
	sort(cnt.rbegin(), cnt.rend());
	cout << cnt[0] << "\n";
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

