#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	ll ans = 0;
	int ne = 0;
	int z = 0;
	while(n--) {
		int a;
		cin >> a;
		if (a < 0) {
			ans += abs(a+1);
			ne++;
		} else if (a > 0){
			ans += a-1;
		} else {
			ans++;
			z++;
		}
	}
	if (ne%2 && z == 0) {
		ans += 2;
	}
	cout << ans << "\n";
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

