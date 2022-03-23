#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	vector<int> v;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			if (v.size() < 2) {
				v.push_back(i);
				n /= i;
			} else {
				break;
			}
		}
	}
	
	if (v.size() == 2 && v[1] != n) {
		cout << "YES\n";
		cout << v[0] << " " << v[1] << " " << n << "\n";
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

