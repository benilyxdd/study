#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<string> ar(3);
	for (string& x : ar) {
		cin >> x;
	}
	for (int i = 0; i < 3; i++) {
		cout << ar[i][i];
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

