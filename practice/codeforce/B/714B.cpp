#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 100002;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar, ar+n);
	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(ar[i]);
	}
	if (s.size() < 3) {
		cout << "YES\n";
		return;
	}

	vector<int> v;
	v.push_back(ar[0]);
	v.push_back(ar[n-1]);
	int mid = (ar[0]+ar[n-1])/2;
	auto it = lower_bound(ar, ar+n, mid);
	v.push_back(*it);

	sort(v.begin(), v.end());
	bool go = 0;
	if (v[0]-v[1] == v[1]-v[2]) {
		go = 1;
	}
	if (go) {
		int diff = v[1]-v[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] > v[1]) {
				int x = ar[i]-diff;
				if (x != v[1]) {
					cout << "NO\n";
					return;
				}
			} else if (ar[i] < v[1]) {
				int x = diff+ar[i];
				if (x != v[1]) {
					cout << "NO\n";
					return;
				}
			}
		}
	} else {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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

