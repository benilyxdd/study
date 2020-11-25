#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v, v1;
	int co = 0, ko = 0, ce = 0, ke = 0;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		if (x % 2) {
			co++;
		} else {
			ce++;
		}
	}
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
		if (x % 2) {
			ko++;
		} else {
			ke++;
		}
	}
	cout << min(ke, co) + min(ce, ko) << "\n";

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
