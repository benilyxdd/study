#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26];

void solve() {
	string s;
	cin >> s;
	int len = s.length();

	for (int i = 0; i < len; i++)
		cnt[s[i]-'a']++;

	int odd = 0;
	for (int i = 0; i < 26; i++)
		if (cnt[i]&1)
			odd++;
	odd--;
	odd = max(0, odd);
	cout << (odd&1 ? "Second" : "First");
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

