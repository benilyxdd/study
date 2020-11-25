#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, n, xd;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	cin >> xd;
	for (int i = 0; i < xd; i++) {
		cin >> a >> b;
		if (a == 1) {
			v[a] += v[a-1]-b;
		} else if (a == n) {
			v[a-2] += b-1;
		} else {
			v[a] += v[a-1]-b;
			v[a-2] += b-1;
		}
		v[a-1] = 0;
	}
	for (int& xdd : v) {
		cout << xdd << "\n";
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


