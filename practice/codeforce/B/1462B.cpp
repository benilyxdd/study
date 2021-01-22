#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	string a = s.substr(0, 4);
	string b = s.substr(n-4);
	string c = s.substr(0, 1), c1 = s.substr(0, 2), c2 = s.substr(0, 3);
	string d = s.substr(n-3), d1 = s.substr(n-2), d2 = s.substr(n-1);
	if (a == "2020" || b == "2020" || c == "2" && d == "020" || c1 == "20" && d1 == "20" || c2 == "202" && d2 == "0") {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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

