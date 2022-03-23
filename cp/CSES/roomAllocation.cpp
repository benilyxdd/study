#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<int, 3>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1];
		ar[i][2] = i;
	}
	sort(ar.begin(), ar.end());

	vector<int> ans(n);
	set<array<int, 2>> s;
	for (int i = 0; i < n; i++) {
		auto it = s.lower_bound({ar[i][0], 0});
		if (it != s.begin()) {
			it--;
			ans[ar[i][2]] = (*it)[1];
			s.erase(it);
		} else {
			ans[ar[i][2]] = s.size();
		}
		s.insert({ar[i][1], ans[ar[i][2]]});
	}
	cout << s.size() << '\n';
	for (int i = 0; i < n; i++) {
		cout << ans[i] + 1 << ' ';
	}
	cout << '\n';
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

