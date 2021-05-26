#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int ans = 15;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if(a <= ans){
			ans = a+15;
		} else {
			cout << ans << "\n";
			return;
		}
	}
	if (ans > 90) {
		cout << 90 << "\n";
	} else {
		cout << ans << "\n";
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
