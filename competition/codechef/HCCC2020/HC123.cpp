#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a%b == 0 || a%c == 0) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
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

