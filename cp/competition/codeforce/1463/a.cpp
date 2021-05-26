#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	
	int mn = min({a, b, c});
	int total = a+b+c;
	int times = total/9;
	
	if (total%3 == 0 && mn >= times && (total/3)%3 == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

