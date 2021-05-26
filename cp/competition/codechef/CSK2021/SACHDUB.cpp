#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int diff = 0;
	for (int i = 0; i < n/2; i++) {
		diff += abs(ar[i] - ar[n-i-1]);
	}
	if (diff == 1 || diff == 0) {
		cout << "KITKAT\n";
		return;
	}

	bool prime = 1;
	for (int i = 2; i * i <= diff; i++) {
		if (diff%i == 0) {
			prime = 0;
			break;
		}
	}
	cout << (prime ? "KIT" : "KAT") << '\n';
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

