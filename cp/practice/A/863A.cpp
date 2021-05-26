#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	while(s.back() == '0') {
		s.pop_back();
	}
	int len = s.length();
	int len2;
	if (len%2) {
		len2 = len/2+1;
	} else {
		len2 = len/2;
	}
	string a = s.substr(len/2, len2);
	string b = s.substr(0, len2);
	reverse(a.begin(), a.end());
	if (a == b) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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


