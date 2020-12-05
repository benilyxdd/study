#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[31];

void f(int x) {
	for (int i = 2; i <= x; i++) {
		if (x%i == 0) {
			int y = 0;
			while(x%i == 0) {
				y++;
				x/=i;
			}
			cnt[i] = max(cnt[i], y);
		}
	}
}

void solve() {
	int n;
	cin >> n;
	memset(cnt, 0, sizeof(cnt));
	for (int i = 2; i <= n; i++) {
		f(i);		
	}
	ll ans = 1;
	for (int i = 2; i <= n; i++) {
		if (cnt[i] != 0) {
			for (int j = 0; j < cnt[i]; j++) {
				ans *= i;
			}
		}
	}
	ans++;
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

