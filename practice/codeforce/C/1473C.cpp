#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, k;

void solve() {
	cin >> n >> k;
	for (int i = 1; i < 2*k-n; i++) {
		cout << i << " ";
	}
	for (int i = k; i >= 2*k-n; i--) {
		cout << i << " ";
	}
	cout << "\n";
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

