#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll a, b;
		char x;
		cin >> a >> x >> b;
		cout << a + b << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("tc2.txt", "r", stdin);
	freopen("tc2_out.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

