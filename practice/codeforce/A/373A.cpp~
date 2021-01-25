#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, cnt[10];
string s[4];

void solve() {
	cin >> n;
	for (int i = 0; i < 4; i++)
		cin >> s[i];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (s[i][j] != '.') {
				cnt[s[i][j]-'0']++;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (cnt[i] > n*2) {
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


