#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> ar(3);
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	if (ar[1] - ar[0] == ar[2] - ar[1]) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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

