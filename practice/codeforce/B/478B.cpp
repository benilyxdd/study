#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll a, b;
	cin >> a >> b;
	ll xd = a/b, left = a%b;
	ll mn = 0;
	for (int i = 0; i < b-left; i++) {
		mn += (xd-1LL)*xd/2LL;
	}
	for (int i = 0; i < left; i++) {
		mn += (xd+1LL)*xd/2LL;
	}
	
	ll xd2 = a-b+1;
	ll mx = (xd2-1)*xd2/2;

	cout << mn << " "  << mx << "\n";

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

