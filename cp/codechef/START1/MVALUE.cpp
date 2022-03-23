#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ar[mxN], n;

void solve() {
	int cnt = 0;
	cin >> n;
	vector<int> pos, neg;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (ar[i] > 0) {
			pos.push_back(ar[i]);
		} else if (ar[i] < 0) {
			neg.push_back(ar[i]);
		} else if (ar[i] == 0) {
			cnt++;
		}
		ar[i] = abs(ar[i]);
	}

	sort(pos.rbegin(), pos.rend());
	sort(neg.begin(), neg.end());

	if (n-cnt < 2) {
		cout << *max_element(ar, ar+n);
	} else {
		int x = 0, y = 0;
		if (pos.size() > 1) 
			x = pos[0]*pos[1]+pos[0]-pos[1];
		if (neg.size() > 1) 
			y = neg[0]*neg[1]+neg[0]-neg[1];

		cout << max(x, y);
	}
	cout << '\n';
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

