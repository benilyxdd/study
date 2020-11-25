#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s1, s2;
	cin >> s1 >> s2;
	int ans = 0;
	int len1 = s1.length(), len2 = s2.length();
	for (int i = 0; i < len1-len2+1; i++) {
		string s = s1.substr(i, len2);
		if (s == s2) {
			ans++;
		}
	}
	cout << ans << "\n";
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

