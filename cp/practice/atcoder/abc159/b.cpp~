#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	string s_rev = s;
	reverse(s_rev.begin(), s_rev.end());
	if (s != s_rev) {
		cout << "No\n";
		return;
	}
	int n = s.length();

	string a = s.substr(0, n/2);
	string b = s.substr((n+1)/2);
	string a_rev = a;
	reverse(a_rev.begin(), a_rev.end());
	if (a != a_rev || a != b) {
		cout << "No\n";
		return;
	}
	cout << "Yes\n";
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

