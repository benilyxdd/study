#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int n;
	cin >> n;
	string a;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == s) {
			cout << "YES\n";
			return;
		}
		v.push_back(a);
	}
	bool a1 = false, b1 = false;
	for (int i = 0; i < n; i++) {
		if (v[i][0] == s[1] && a1 == false) {
			a1 = true;
		}
		if (v[i][1] == s[0] && b1 == false) {
			b1 = true;
		}
		if (a1 && b1) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";

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


