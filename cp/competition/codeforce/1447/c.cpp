#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	ll w;
	cin >> n >> w;
	vector<array<int, 2>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0];
		ar[i][1] = i;
	}
	
	ll tar = (w + 2LL - 1LL) / 2LL;

	sort(ar.begin(), ar.end());
	vector<array<int, 2>> search_array;
	for (array<int, 2> &x : ar) {
		if (x[0] >= tar && x[0] <= w) {
			cout << 1 << '\n'
				 << x[1] + 1 << '\n';
			return;
		}
		if (x[0] < tar) {
			search_array.push_back(x);
		}
	}
	sort(search_array.rbegin(), search_array.rend());

	vector<int> ans_pos;
	ll total = 0;
	for (array<int, 2> &x : search_array) {
		total += (ll)x[0];
		ans_pos.push_back(x[1]);
		if (total >= tar) {
			break;
		}
	}

	if (total < tar) {
		cout << -1 << '\n';
		return;
	}

	cout << ans_pos.size() << '\n';
	for (int &x : ans_pos) {
		cout << x + 1 << ' ';
	}
	cout << '\n';
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

