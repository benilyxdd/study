#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool prime(int x) {
	for (int i = 2; i < x; i++) {
		if(x%i == 0) {
			return false;
		}
	}
	return true;
}

void solve() {
	int a, b;
	cin >> a >> b;
	for (int i = a+1; i <= b; i++) {
		if (prime(i)) {
			if (i == b) {
				cout << "YES\n";
				return;
			} else {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "NO\n";
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


