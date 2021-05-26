#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxW = 1e5+5;
int ar[mxW], w, n, pre[mxW];

ll getSum(int i, int j) {
	return (pre[j]-pre[i-1]);
}

void go() {
	sort(ar, ar+w);
	pre[0] = ar[0];
	for (int i = 1; i < mxW; i++) 
		pre[i] = pre[i-1]+ar[i];
}

void solve() {
	set<int> pot;
	cin >> w >> n;
	for (int i = 0; i < w; i++) {
		cin >> ar[i];
		pot.insert(ar[i]);
	}
	go();
	
	int mn = (int)1e18;
	for (const int& in : pot) {
		int temp = 0;
		for (int i = 0; i < w; i++) {
			if (ar[i] > in) {
				temp += min(ar[i]-in, n-ar[i]+in);
			} else {
				temp += min(in-ar[i], n+ar[i]-in);
			}
		}
		mn = min(mn, temp);
	}
	cout << mn << "\n";
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

