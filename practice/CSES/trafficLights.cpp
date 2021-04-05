#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int x, n;
	cin >> x >> n;
	vector<int> ar(n);
	for (int& in : ar) {
		cin >> in;
	}

	set<int> s;
	map<int, int> m;
	s.insert(0);
	s.insert(x);
	m[x] = 1;

	for (int i = 0; i < n; i++) {
		auto it = s.lower_bound(ar[i]);

		int r = *it;
		it--;
		int l = *it;

		m[r-l]--;
		if (!m[r-l]) {
			m.erase(r-l);
		}
		
		m[r-ar[i]]++;
		m[ar[i]-l]++;

		s.insert(ar[i]);
		cout << ((--m.end()) -> first)  << ' ';
	}
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

