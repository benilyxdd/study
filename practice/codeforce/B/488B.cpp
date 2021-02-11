#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26], cnt2[26];

void solve() {
	string s, t;
	cin >> s >> t;

	for (int i = 0; i < s.length(); i++) {
		cnt[s[i]-'a']++;
	}
	for (int i = 0; i < t.length(); i++) {
		cnt2[t[i]-'a']++;
	}

	bool k = 0;
	//tree
	for (int i = 0; i < 26; i++) {
		//cout << cnt2[i] << " " << cnt[i] << "\n";
		if (cnt2[i] > cnt[i]) {
			k = 1;
			break;
		}
	}
	if (k) {
		cout << "need tree";
		return;
	}

	bool aut = 0, arr = 1;
	//aut
	for (int i = 0; i < 26; i++) {
		if (cnt[i] != cnt2[i]) {
			aut = 1;
			break;
		}
	}

	//arr
	for (int i = 0, j = 0; i < s.length(); i++) {
		if (s[i] == t[j]) {
			while(s[i] == t[j]) {
				i++, j++;
				if (j == t.length()) {
					arr = 0;
					break;
				}
			}
		}
	}
	if (aut && arr) {
		cout << "both";
	} else if (aut) {
		cout << "automaton";
	} else if (arr) {
		cout << "array";
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

