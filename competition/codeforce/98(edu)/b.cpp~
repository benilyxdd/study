#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		vector<int> temp(a.begin(), a.end());
		temp.erase(temp.begin()+i);
		set<int> xd(temp.begin(), temp.end());
		int mx = *max_element(temp.begin(), temp.end());
		int x = a[i];
		for (int& xd : temp) {
			x -= (mx-xd);
		}
		if (x < 0) {
			ans = max(ans, abs(x));
		} else {
			for (int j = 0; j < 200000; j++) {
				if ((x+j)%(n-1) == 0) {
					ans = max(ans, x+j);
					break;
				}
			}
		}
	}
	cout << ans << "\n";
}

signed main() {
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

