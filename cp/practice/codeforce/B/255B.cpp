#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	int cnt = 0, cnt1 = 0;
	for (char& x : s) {
		if (x == 'x') {
			cnt++;
		} else {
			cnt1++;
		}
	}
	int mn = min(cnt1, cnt);
	cnt -= mn;
	cnt1 -= mn;

	for (int i = 0; i < cnt; i++) 
		cout << 'x';
	for (int i = 0; i < cnt1; i++)
		cout << 'y';
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

