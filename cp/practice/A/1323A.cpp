#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int e=0, o=0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		if (a%2) {
			o++;
		} else {
			e++;
		}
	}

	if (e == 0 && o < 2) {
		cout << -1 << "\n";
		return;
	}

	if (e > 0) {
		cout << 1 << "\n";
		for (int i = 0; i < n; i++) {
			if (v[i] % 2 == 0) {
				cout << i+1 << "\n";
				return;
			}
		}
	} else {
		if (o > 1 && e < 1)  {
			cout << 2 << "\n";
			int j = 0;
			for (int i = 0; i < n; i++) {
				if (j < 2 && v[i]%2) {
					cout << i+1 << " ";
					j++;
				}
			}
		}
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


