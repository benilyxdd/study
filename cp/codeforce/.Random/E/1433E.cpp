#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a[10] = {1, 3, 40, 1260, 72576, 6652800, 889574400, 163459296000, 39520825344000, 12164510040883200};

void solve() {
	ll n;
	cin >> n;
	cout << a[n/2-1];
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


