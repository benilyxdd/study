#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, sum = 0;
	cin >> n;
	vector<int> ar(n + 2);
	ar[0] = 0, ar[n + 1] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
		sum += abs(ar[i] - ar[i - 1]);
	}
	sum += abs(ar[n + 1] - ar[n]);
	for (int i = 0; i < n; i++) {
		cout << sum - abs(ar[i] - ar[i + 1]) - abs(ar[i + 1] - ar[i + 2]) + abs(ar[i] - ar[i + 2]) << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

