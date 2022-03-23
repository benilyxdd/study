#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26];

bool check() {
	for (int i = 0; i < 26; i++)
		if (cnt[i] > 1)
			return false;
	return true;
}

void wtf() {
	for (int i = 0; i < 26; i++) 
		cout << cnt[i] << " ";
	cout << "\n";
}

void solve() {
	string s;
	cin >> s;

	bool ans = 0;
	int len = s.length(), q = 0, pos = 0;
	for (int i = 0, j = 25; j < len; i++, j++) {
		if (i) {
			(s[i-1] == '?' ? q-- : cnt[s[i-1]-'A']--);
			(s[j] == '?' ? q++ : cnt[s[j]-'A']++);
			if (check()) {
				ans = 1;
				pos = i;
				break;
			}
		} else {
			for (int k = i; k < j+1; k++) {
				if (s[k] == '?') 
					q++;
				else
					cnt[s[k]-'A']++;
			}
			if (check()) {
				ans = 1;
				pos = i;
				break;
			}
		}
	}
	if (!ans) {
		cout << -1;
	} else {
		vector<char> left;
		for (int i = 0; i < 26; i++) 
			if (cnt[i] == 0)
				left.push_back(char(i+'A'));

		for (int i = 0, j = 0; i < len; i++) {
			if (i >= pos && i < pos+26) {
				if (s[i] == '?') {
					cout << left[j];
					j++;
				} else {
					cout << s[i];
				}
			} else {
				cout << (s[i] == '?' ? 'A' : s[i]);
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

