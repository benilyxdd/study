#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, x;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		cin >> x;
		v.push_back(x);
	}

	int cnt = 0, temp;
	for (int i = 0; i < a; i++) {
		if (v[i] == b) {
			temp = b-1;
		} else if (v[i] == temp) {
			temp--;
			if (v[i] == 1) {
				cnt++;
			}
		} else {
			temp = -1e9;
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
