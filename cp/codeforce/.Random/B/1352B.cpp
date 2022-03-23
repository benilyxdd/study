#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if ((a-b+1)%2 && (a-b+1) > 0) {
		cout << "YES\n";
		for (int i = 0; i < b-1; i++) {
			cout << 1 << " ";
		}
		cout << a-b+1 << "\n";
		return;
	} else if ((a-b*2+2)%2 == 0 && (a-b*2+2) > 0) {
		cout << "YES\n";
		for (int i = 0; i < b-1; i++) {
			cout << 2 << " ";
		}
		cout << a-b*2+2 << "\n";
		return;
	}
	cout << "NO\n";
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

