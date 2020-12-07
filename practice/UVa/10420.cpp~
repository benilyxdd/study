#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
string s;
map<string, int> m;

void solve() {
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		int pos = s.find_first_of(' ');
		string ss = s.substr(0, pos);
		m[ss]++;
	}
	for (auto& x : m) {
		cout << x.first << " " << x.second << "\n";
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


