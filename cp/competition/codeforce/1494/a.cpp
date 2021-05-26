#include <bits/stdc++.h>
using namespace std;

#define ll long long
string s;

bool ok(bool a, bool b, bool c) {
	string temp;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') {
			if (a) {
				temp += '(';
			} else{ 
				temp += ')';
			}
		} else if (s[i] == 'B') {
			if (b) {
				temp += '(';
			} else {
				temp += ')';
			}
		} else {
			if (c) {
				temp += '(';
			} else {
				temp += ')';
			}
		}
	}
	//cout << temp << '\n';

	stack<char> s;
	for (int i = 0; i < temp.length(); i++){
		if (temp[i] == '(') {
			s.push('(');
		} else {
			if (!s.empty()) {
				s.pop();
			} else {
				return false;
			}
		}
	}
	return s.size() == 0;
}

void solve() {
	cin >> s;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				if (ok(i, j, k)) {
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
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

