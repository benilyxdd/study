#include <bits/stdc++.h>
using namespace std;

#define ll long long

int check(int a) {
	int ans = 0;
	while(a) {
		ans += a%10;
		a/=10;
	}
	return ans;
}

void solve() {
	int n; cin >> n;
	int ans = 0;
	while(n) {
		ans++;
		if (check(ans) == 10) n--;
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

