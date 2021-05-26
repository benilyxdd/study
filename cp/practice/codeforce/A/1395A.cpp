#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<int> v;
	int odd = 0;
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		if (a%2) {
			odd++;
		}
		v.push_back(a);
	}
	if (odd <= 1) {
		cout << "YES\n";
	} else if (v[0] > 0 && v[1] > 0 && v[2] > 0) {
		odd = 0;
		for (int i = 0; i < 3; i++) {
			v[i]--;
		}
		v[3] += 3;
		for (int& it : v) {
			if (it%2){
				odd++;
			}
		}
		if (odd <= 1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	} else {
		cout << "NO\n";
	}
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


