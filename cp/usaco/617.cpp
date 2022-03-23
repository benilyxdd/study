#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, b;
	cin >> n >> b;
	vector<array<int, 2>> ar(n);
	for (array<int, 2> &x : ar) {
		for (int &in : x) {
			cin >> in;
		}
	}

	set<int> v, h;
	for (int i = 0; i < n; i++) {
		v.insert(ar[i][0] + 1);
		h.insert(ar[i][1] + 1);
	}

	int mn = 999;
	for (const int &ver : v) {
		for (const int &hor : h) {
			vector<int> cnt(4, 0);
			for (array<int, 2> &cow : ar) {
				if (cow[0] < ver && cow[1] < hor) {
					cnt[0]++;
				} else if (cow[0] < ver && cow[1] > hor) {
					cnt[1]++;
				} else if (cow[0] > ver && cow[1] < hor) {
					cnt[2]++;
				} else if (cow[0] > ver && cow[1] > hor) {
					cnt[3]++;
				}
			}
			int mx = *max_element(cnt.begin(), cnt.end());
			mn = min(mx, mn);
		}
	}
	cout << mn << '\n';
}

int main() {
	freopen("balancing.in", "r", stdin);
	freopen("balancing.out", "w", stdout);
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

