#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if (a * 6 >= b && b >= a) {
		cout << "Yes";
	} else {
		cout << "No";
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

