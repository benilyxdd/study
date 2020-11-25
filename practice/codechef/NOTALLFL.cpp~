#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int mx = 0, temp = 0, c;
	vector<int> v;
	string d;
	while(a--) {
		cin >> c;
		if (find(v.begin(), v.end(), c) == v.end()) {
			v.push_back(c);
		}
		d += (char)c;
		if (v.size() < b) {
			temp++;
			mx = max(temp, mx);
		} else {
			int xd = (int)d.find_last_of(v[0]);
			v.erase(v.begin());
			d.erase(0, xd);
			temp = d.length();
			mx = max(temp, mx);
		}
	}
	cout << mx << "\n";
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

