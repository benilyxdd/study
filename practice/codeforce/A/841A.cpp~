#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int c[26] = {0};
	for (int i = 0; i < a; i++) {
		char x;
		cin >> x;
		c[x-'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (c[i] > b) {
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
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


