#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;

	int cnt = 0;
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i]) {
				cnt++;
			}
		}
	}
	for (int i = 0; i < b.length()-a.length(); i++) {
		string temp = b.substr(i, a.length());

		for (int j = 0; j < a.length(); j++) {
			if (temp[j] != a[i]) {
				cnt++;
			}
		}
	}
	cout << cnt;
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

