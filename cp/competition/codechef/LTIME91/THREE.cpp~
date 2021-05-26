#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26];

void solve() {
	memset(cnt, 0, sizeof(cnt));
	string s;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		cnt[s[i]-'a']++;
	}

	int ans = 0;
	for (int i = 0; i < 26; i++) {
		ans += cnt[i]/2; 
	}
	
	cout << min(ans, n/3) << "\n";
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

