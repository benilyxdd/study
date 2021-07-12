#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, m, r;
	cin >> n >> m >> r;

	vector<int> milk(n);
	for (int &x : milk) {
		cin >> x;
	}

	vector<array<int, 2>> buy(m);
	for (array<int, 2> &ar : buy) {
		cin >> ar[1] >> ar[0];
	}

	vector<ll> rent(r);
	for (ll &x : rent) {
		cin >> x;
	}

	sort(milk.begin(), milk.end(), greater<int>());
	sort(rent.begin(), rent.end(), greater<int>());
	sort(buy.begin(), buy.end(), [](array<int, 2> &a, array<int, 2> &b)
		 { return a[0] > a[1]; });

	vector<ll> prefix_rent(r + 1);
	partial_sum(prefix_rent.begin(), prefix_rent.end(), ++rent.begin());

	ll ans = 0;
	for (int i = 0; i < n;) {
		
	}
}

signed main() {
	freopen("rental.in", "r", stdin);
	freopen("rental.out", "w", stdout);
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

