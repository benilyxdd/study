#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int ans = 0;
	int x = a * 2;
	int y = a * 5;
	int z = a * 8;
	if (x % b == 0) {
		ans+=x/b;
	} else {
		ans+=x/b+1;
	}
	if (y % b == 0){
		ans+=y/b;
	} else {
		ans+=y/b+1;
	}
	if (z % b == 0){
		ans+=z/b;
	} else {
		ans+=z/b+1;
	}
	cout << ans;
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
