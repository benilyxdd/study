#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	for (int i = 1; i < a; i++) {
		if (v[i] > 0 && i <= b) {
			if (v[i]*i <= b) {
				b -=v[i]*i;
				v[0] += v[i];
			} else {
				while(b >= i) {
					b -= i;
					v[0]++;
				}
			}
		}
	}

	cout << v[0] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
