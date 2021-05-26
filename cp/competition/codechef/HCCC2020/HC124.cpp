#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26], cnt2[26];

void solve() {
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++) 
		cnt[s1[i]-'a']++;
	
	for (int i = 0; i < s2.length(); i++)
		cnt2[s2[i]-'a']++;

	int ans = 0, ans2 = 0;
	for (int i = 0; i < 26; i++) {
		ans += abs(cnt[i] - cnt2[i]);
	}
	for (int i = 0; i < 26; i++) {
		ans2 += abs(cnt[i]*2 - cnt2[i]);
	}
	cout << min(ans, ans2) << "\n";
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

