#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
	int a, b, c;
	char d;
	int e, f;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0 ; i < a; i++) {
		cin >> c;
		v.push_back(c);
	}
	int ans = 0;
	for (int i = 0; i < b; i++) {
		cin >> d >> e >> f;
		if (d == 'U') {
			v[e-1] = f;
		} else {
			int temp = 0;
			for (int j = e, x = 1; j <= f; j++, x++) {
				if (x%2) {
					temp += x*v[j-1];
				} else {
					temp -= x*v[j-1];
				}
			}
			ans += temp;
		}
	}
	cout << ans << "\n";
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
