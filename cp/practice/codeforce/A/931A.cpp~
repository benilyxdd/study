#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int n = abs(a-b)-1;
	int ans = 0;
	if (n % 2) {
		ans += (n/2+2)*(n/2+1);
	} else {
		ans += (n/2+1)*(n/2);
		ans += n/2+1;
	}
	cout << ans << "\n";

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
