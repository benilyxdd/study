#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<string, int> m;
vector<string> v1;

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s[0] == '!') {
			string temp(s, 1);
			v1.push_back(temp);
		} else {
			m[s]++;
		}
	}

	for (string& temp : v1) {
		if(m[temp] > 0) {
			cout << temp << "\n";
			return;
		}
	}
	cout << "satisfiable";
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

