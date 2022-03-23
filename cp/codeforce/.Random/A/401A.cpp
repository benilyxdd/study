#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, a;
	cin >> n >> a;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	if (abs(sum)%a == 0) {
		cout << abs(sum) / a << "\n";
	} else {
		cout << abs(sum) / a + 1 << "\n";
	}
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
