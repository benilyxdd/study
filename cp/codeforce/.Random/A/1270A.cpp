#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	int amx = 0;
	int bmx = 0;
	while(a--) {
		int x;
		cin >> x;
		if (x > amx) {
			amx = x;
		}
	}
	while(b--) {
		int x;
		cin >> x;
		if (x > bmx) {
			bmx = x;
		}
	}
	cout << (amx > bmx ? "YES\n" : "NO\n");
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
