#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v, v1;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		v1.push_back(a);
	}
	for (int& a : v1) {
		v.push_back(a);
	}
	if (find(v.begin(), v.end(), 1) == v.end()) {
		cout << 0 << "\n";
		return;
	}
	
	int mx = 1, temp = 1;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 1 && v[i+1] == 1) {
			temp++;
			mx = max(temp, mx);
		} else {
			temp = 1;
		}
	}
	cout << mx << "\n";
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

