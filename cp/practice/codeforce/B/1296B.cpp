#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int ans = 0;
	while(n>0) {
		int len = to_string(n).length();
		string a = to_string(n);
		int x = (pow(10,len-1))*(a[0]-'0');
		n = n % x;
		n += x/10;
		ans += x;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
