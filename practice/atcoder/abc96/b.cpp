#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> ar(3);
	int k;
	for (int& x : ar) {
		cin >> x;
	}
	cin >> k;
	int sum = 0;
	for (int i = 0; i < k; i++) {
		auto it = max_element(ar.begin(), ar.end());
		*it *= 2;
	}
	for (int& x : ar) {
		sum += x;
	}
	cout << sum;
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

