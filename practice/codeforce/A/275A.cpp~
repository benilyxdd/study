#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<int> v(9, 0);
	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		if (i == 0) {
			v[0] += a;
			v[1] += a;
			v[3] += a;
		} else if (i == 1) {
			v[1] += a;
			v[0] += a;
			v[2] += a;
			v[4] += a;
		} else if (i == 2) {
			v[2] += a;
			v[1] += a;
			v[5] += a;
		} else if (i == 3) {
			v[3] += a;
			v[0] += a;
			v[4] += a;
			v[6] += a;
		} else if (i == 4) {
			v[4] += a;
			v[1] += a;
			v[3] += a;
			v[5] += a;
			v[7] += a;
		} else if (i == 5) {
			v[5] += a;
			v[2] += a;
			v[4] += a;
			v[8] += a;
		} else if (i == 6) {
			v[6] += a;
			v[3] += a;
			v[7] += a;
		} else if (i == 7) {
			v[7] += a;
			v[8] += a;
			v[6] += a;
			v[4] += a;
		} else if (i == 8) {
			v[8] += a;
			v[5] += a;
			v[7] += a;
		}
	}
	for (int i = 1; i <= v.size(); i++) {
		cout << (v[i-1]%2 ? 0 : 1);
		if (i%3 == 0) {
			cout << "\n";
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


