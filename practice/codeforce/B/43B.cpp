#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[200];

void solve() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	for (char& ch : a) {
		cnt[ch]++;
	}
	for (char& ch : b) {
		if (ch == ' ')
			continue;
		if (cnt[ch] > 0) {
			cnt[ch]--;
		} else {
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

