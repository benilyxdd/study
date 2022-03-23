#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> ar(7);
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	cout << ar[0] << ' ' << ar[1] << ' ' << ar.back() - ar[0] - ar[1] << '\n';
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

