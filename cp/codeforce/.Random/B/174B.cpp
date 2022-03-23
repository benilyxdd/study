#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	vector<string> all, ans;
	bool ok = 1;
	int n = s.length();
	string temp;
	for (int i = 0; i < n; i++) {
		if (isalpha(s[i])) {
			temp += s[i];
		} else {
			all.push_back(temp);
			temp = "";
		}
	}
	all.push_back(temp);
	int all_len = all.size();
	
	//can't;
	if (all_len == 1) {
		ok = 0;
	}
	for (int i = 0; i < all_len; i++) {
		if (i == 0) {
			if (all[i].length() > 8 || all[i].length() < 1) {
				ok = 0;
				break;
			}
		} else if (i == all_len - 1) {
			if (all[i].length() > 3 || all[i].length() < 1) {
				ok = 0;
				break;
			}
		} else {
			if (all[i].length() > 11 || all[i].length() < 2) {
				ok = 0;
				break;
			}
		}
	}

	if (!ok) {
		cout << "NO\n";
		return;
	}

	//constru;
	temp = all[0] + '.';
	for (int i = 1; i < all_len; i++) {
		int len = all[i].length();
		int mn = min(3, len - 1);
		
		temp += all[i].substr(0, mn);
		if (i == all_len - 1) {
			temp += all[i].substr(mn);
		}
		ans.push_back(temp);
		temp = all[i].substr(mn);
		temp += '.';
	}

	cout << "YES\n";
	for (string& x : ans) {
		cout << x << '\n';
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

