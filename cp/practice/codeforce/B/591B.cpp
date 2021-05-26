#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26], n, m;
char a, b;
string s;

void solve() {
	for (int i = 0; i < 26; i++) {
		cnt[i] = i;
	}

	cin >> n >> m >> s;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		int x = -1, y = -1;
		for (int j = 0; j < 26; j++) {
			if (x > -1 && y > -1) {
				break;
			}
			if (char(j+'a') == a) {
				x = j;
			}
			if (char(j+'a') == b) {
				y = j;
			}
		}
		swap(cnt[x], cnt[y]);
	}

	for (char& ch : s) {
		for (int i = 0; i < 26; i++) {
			if (cnt[i] == ch-'a') {
				cout << char(i+'a');
				break;
			}
		}
	}
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

