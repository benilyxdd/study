#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int sum = 0, sum2 = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum2 += a;
	}
	if (sum2 > sum) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
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
