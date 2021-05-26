#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int ans = 0;
	while(n > 9) {
		int x = n%10;
		int add = (10-x);
		n += add;
		ans += add;
		n/=10;
		while(n%10 == 0) {
			n/=10;
		}
	}
	cout << ans+9 << "\n";
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


