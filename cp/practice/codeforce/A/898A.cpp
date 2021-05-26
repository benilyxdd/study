#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a = (n/10)*10;
	if (to_string(n).back() > '4') {
		cout << a + 10 << "\n";
	} else {
		cout << a << "\n";
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
