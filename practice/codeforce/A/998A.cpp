#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	int i = 0;
	set<int> s(v.begin(), v.end());
	if (s.size() < b) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		for (const int& x : s) {
			if (i < b) {
				int n = distance(v.begin(), find(v.begin(), v.end(), x));
				cout << n+1 << " ";
				i++;
			}
		}
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


