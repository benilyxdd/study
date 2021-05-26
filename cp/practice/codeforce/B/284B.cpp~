#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int a = 0, b = 0, c = 0;
	for (char& x : s) {
		if (x == 'A') {
			a++;
		} else if (x == 'I') {
			b++;
		} else {
			c++;
		}
	}

	if (b > 1) {
		cout << 0;
		return;
	} else if (b == 1) {
		cout << 1;
		return;
	}

	cout << a;
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

