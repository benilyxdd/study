#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n%2) {
		for (int i = 0; i < n; i+=2) {
			if ((s[i]-'0')%2 == 1) {
				cout << "1\n";
				return;
			}
		}
		cout << "2\n";
	} else {
		for (int i = 1; i < n; i+=2) {
			if ((s[i]-'0')%2 == 0) {
				cout << "2\n";
				return;
			}
		}
		cout << "1\n";
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


