#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int n = s.length();

	int mx = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			int temp = 1;
			while (s[i + 1] == '1') {
				temp++;
				i++;
			}
			mx = max(temp, mx);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i] == '0' && s[j] == '1') {
				swap(s[i], s[j]);
				int temp = 0;
				for (int k = 0; k < n; k++) {
					if (s[k] == '1') {
						temp = 1;
						while (s[k + 1] == '1') {
							k++;
							temp++;
						}
						mx = max(temp, mx);
					}
				}
				swap(s[i], s[j]);
			}
		}
	}
	cout << mx << '\n';
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

