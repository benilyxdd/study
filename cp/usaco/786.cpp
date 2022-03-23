#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<ll, 2>> t(n);
	vector<array<ll, 3>> event;
	for (int i = 0; i < n; i++) {
		cin >> t[i][0] >> t[i][1];
		event.push_back({t[i][0], i, 1});
		event.push_back({t[i][1], i, 0});
	}
	sort(event.begin(), event.end());

	vector<ll> alone(n, 0);
	ll total_time = 0;
	ll prev_time = 0;
	set<int> cow;

	for (array<ll, 3> &ar : event) {
		ll cur_time = ar[0];
		
		if (cow.size() > 0) {
			total_time += cur_time - prev_time;
		}
		
		if (cow.size() == 1) {
			alone[(*cow.begin())] += cur_time - prev_time;
		}

		if (ar[2]) {
			cow.insert(ar[1]);
		} else {
			cow.erase(ar[1]);
		}

		prev_time = cur_time;
	}

	ll mn = INT_MAX;
	for (ll &x : alone) {
		mn = min(mn, x);
	}
	cout << total_time - mn << '\n';
}

int main() {
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
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

