#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	vector<int> cnt(3, 0);
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			cnt[0]++;
		} else if (s[i] == 'G') {
			cnt[1]++;
		} else {
			cnt[2]++;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (n == cnt[i]) {
			if (i == 0) {
				cout << 'R';
			} else if (i == 1) {
				cout << 'G';
			} else {
				cout << 'B';
			}
			return;
		}
	}

	bool ok = 1;
	for (int i = 0; i < 3; i++) {
		if (cnt[i] < 1) {
			ok = 0;
		}
	}
	if (ok) {
		cout << "BGR";
		return;
	}

	int cc = 0;
	for (int i = 0; i < 3; i++) {
		if (cnt[i] > 1) {
			cc++;
		}	
	}
	if (cc > 1) {
		cout << "BGR";
		return;
	}	

	vector<int> ans;
	for (int i = 0; i < 3; i++) {
		if (cnt[i] == 1) {
			ans.push_back(i);
		}
	}
	if (ans[0] == 0 && ans[1] == 1) {
		cout << 'B';
		return;
	} else if (ans[0] == 0 && ans[1] == 2) {
		cout << 'G';
		return;
	} else if (ans[0] == 1 && ans[1] == 2) {
		cout << 'R';
		return;
	}

	set<char> a2;
	for (int& x : ans) {
		if (x == 0) {
			a2.insert('R');
		} else if (x == 1) {
			a2.insert('G');
		} else {
			a2.insert('B');
		}
	}

	for (int i = 0; i < 3; i++) {
		if (cnt[i] > 1) {
			if (i == 0) {
				a2.insert('G');
				a2.insert('B');
			} else if (i == 1) {
				a2.insert('R');
				a2.insert('B');
			} else {
				a2.insert('R');
				a2.insert('G');
			}
		}
	}
	for (const char& x : a2) {
		cout << x;
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

