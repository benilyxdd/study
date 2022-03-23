#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<array<int, 3>> ar(n); // [0] start, [1] end, [2] bucket(s) needed
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0] >> ar[i][1] >> ar[i][2];
	}
	sort(ar.begin(), ar.end());
	set<array<int, 2>> s; // [0] end time, [1] bucket number
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < ar[i][2]; j++) {
			int pos = -1;
			auto it = s.lower_bound({ar[i][0]});
			if (it != s.begin()) {
				it--;
				pos = (*it)[1];
				s.erase(it);
			} else {
				pos = s.size();
			}
			s.insert({ar[i][1], pos});
		}
	}
	cout << s.size() << '\n';
	
}

int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
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

