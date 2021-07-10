#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	string s_temp = s;
	sort(s_temp.begin(), s_temp.end());
	for (int i = 0; i < s.length(); i++) {
		if (s_temp[i] != char(i + 'a')) {
			cout << "NO\n";
			return;
		}
	}
	int x = s.find('a');
	if (x == -1) {
		cout << "NO\n";
		return;
	}

	string a = s.substr(0, x);
	string b = s.substr(x);
	string a_temp = a;
	sort(a_temp.begin(), a_temp.end());
	reverse(a_temp.begin(), a_temp.end());
	if (a != a_temp) {
		cout << "NO\n";
		return;
	}
	string b_temp = b;
	sort(b_temp.begin(), b_temp.end());
	if (b != b_temp) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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

