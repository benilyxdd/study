#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int cnt[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cnt[a]++;
	}
	int ans = 0 ;
	vector<int> v;
	for (int i = 0; i < mxN; i++) {
		if (cnt[i] > 1) {
			v.push_back(cnt[i]);
		}
	}
	for (int& x : v) {
		if (x > 3) {
			ans += x/4;
			x %= 4;
		}
	}

	sort(v.begin(), v.end());
	
	int len = v.size();
	for (int i = 1; i < len; i++) {
		int x = v[i-1], y = v[i];
		int mn = min(x, y);
		int plus = mn/2;
		ans += plus;
		v[i-1] -= plus*2;
		v[i] -= plus*2;
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

