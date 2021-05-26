#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, sum = 0;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum += max(0LL, ar[i]);
	}
	sort(ar.begin(), ar.end());

	if (sum == 0) {
		auto it = lower_bound(ar.begin(), ar.end(), 0);
		it--;
		while (*it % 2 == 0) {
			it--;
		}
		cout << *it;
		return;
	} 
	
	if (sum&1) {
		cout << sum;
		return;
	}

	bool odd = 0;
	int no = -(int)1e9;
	for (int i = 0; i < n; i++) {
		if (ar[i] > 0) {
			break;
		}
		if (ar[i]&1) {
			odd = 1;
			no = max(no, ar[i]);
		}
	}


	bool find = 0;
	int mn = 1e9;
	for (int i = 0; i < n; i++) {
		if (ar[i] > 0) {
			if (ar[i]&1) {
				find = 1;
				mn = min(mn, ar[i]);
			}
		}
	}
	if (odd) {
		cout << max(sum + no, sum - mn);
	} else {
		cout << sum - mn;
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

