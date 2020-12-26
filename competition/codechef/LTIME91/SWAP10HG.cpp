#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string a, b;
	cin >> n >> a >> b;
	
	int a1 = 0, b1 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == '0') {
			a1++;
		}
		if (b[i] == '0') {
			b1++;
		}
	}
	if (a1 != b1) {
		cout << "No\n";
		return;
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			if (a[i] == '0') {
				cnt--;
			} else {
				cnt++;
			}
			if (cnt < 0) {
				cout << "No\n";
				return;
			}
		}
	}
	cout << "Yes\n";
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

