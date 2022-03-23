#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m, ans = 0, k;
	cin >> n >> m;
	int cnt[n+1];
	array<int, 2> ar[m];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < m; i++)
		cin >> ar[i][0] >> ar[i][1];
	
	cin >> k;
	array<int, 2> ax[k];
	for (int i = 0; i < k; i++) 
		cin >> ax[i][0] >> ax[i][1];
	sort(ax, ax+k);
	for (int i = 0; i < k; i++) {
		if (cnt[ax[i][0]] == 0) {
			cnt[ax[i][0]]++;
			continue;
		}
		if (cnt[ax[i][1]] == 0) {
			cnt[ax[i][1]]++;
			continue;
		}
		cnt[ax[i][0]]++;
	}

	for (int i = 0; i < m; i++) {
		if (cnt[ar[i][0]] > 0 && cnt[ar[i][1]] > 0) {
			ans++;
		}
	}
	cout << ans;
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

