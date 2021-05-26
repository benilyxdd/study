#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int ar[mxN], cnt[mxN];

void solve() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
	}
	for (int i = 0; i < mxN; i++) {
		sum += (cnt[i]-1)*cnt[i]/2;
	}

	for (int i = 1; i <= n; i++) {
		cout << sum-cnt[ar[i-1]]+1 << "\n";
	}

}

signed main() {
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

