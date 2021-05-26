#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n = 4;
	//cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//int x = 0;
	//cin >> x;
	for (int i = 1; i < 1<<n; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
			if (1<<j&i) {
				s += a[j];
			}
		}
		if (s == 0) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
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

