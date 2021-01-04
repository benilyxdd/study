#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)3e5+5;
int n, ar[mxN];
bool ans[mxN];

void solve() {
	for (int i = 0; i < mxN; i++) {
		ans[i] = 0;
	}
	cin >> n;
	vector<int> cnt(n+1);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		++cnt[ar[i]];
	}
	
	int l = 0, r = n-1, x = 1;
	for (; l < r && (ar[l] == x || ar[r] == x) && cnt[x] == 1; ++x) {
		ans[r-l+1] = 1;

		if (ar[l] == x)
			l++;
		else
			r--;
	}

	if (l < r && cnt[x] > 0)
		ans[r-l+1] = 1;
	
	ans[1] = *min_element(next(cnt.begin()), cnt.end());
	for (int i = 1; i <= n; i++)
		cout << ans[i];
	cout << "\n";
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

