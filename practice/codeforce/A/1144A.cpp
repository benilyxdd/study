#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string a;
	cin >> a;
	sort(a.begin(), a.end());
	for (int i = 0; i < a.length()-1; i++) {
		if (a[i] == a[i+1]) {
			cout << "NO\n";
			return;
		}
		if (a[i+1] - a[i] != 1) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";

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
