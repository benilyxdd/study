#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;

	vector<vector<int>> go[n + 1];
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		ar[i] = i + 1;
	}

	do {
		set<int> s;
		for (int i = 1; i < n; i++) {
			s.insert(abs(ar[i - 1] - ar[i]));
		}
		go[s.size()].push_back(ar);
	} while (next_permutation(ar.begin(), ar.end()));

	for (int i = 0; i <= n; i++) {
		cout << i << '\n';
		for (vector<int>& vec : go[i]) {
			for (int& in : vec) {
				cout << in << ' ';
			}
			cout << '\n';
		}
		cout << '\n';
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

