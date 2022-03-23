#include <bits/stdc++.h>

using namespace std;

#define ll long long

int cnt[26];

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		cnt[s[i]-'a']++;
	}
	int odd = 0, change;
	vector<int> pos;
	for (int i = 0; i < 26; i++) {
		if (cnt[i]%2) {
			odd++;
			pos.push_back(i);
		}
	}
	change = odd/2;
	for (int i = 0; i < change; i++) {
		cnt[pos[pos.size()-1-i]]--;
		cnt[pos[i]]++;
	}

	string ans;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < cnt[i]/2; j++) {
			ans += (char)97+i;
		}
	}
	if (len%2) {
		ans += (char)97+pos[pos.size()/2];
	}
	for (int i = 25; i >= 0; i--) {
		for (int j = 0; j < cnt[i]/2; j++) {
			ans += (char)97+i;
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

