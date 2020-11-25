#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<string> v;
	string s;
	while(cin >> s) {
		if (s == "x") {
			break;
		} else {
			v.push_back(s);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if ((v[i][j]-'0')%2 == 1) {
				v[i][j] = '8';
			}
		}
	}
	vector<double> ans;
	for (string a : v) {
		ans.push_back(stod(a));
	}
	sort(ans.begin(), ans.end());
	for (double a : ans) {
		cout << a << "\n";
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
