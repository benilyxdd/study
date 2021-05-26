#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	map<string, string> m1;
	map<string, int> m;
	for (int i = 0; i < a; i++) {
		string c, d;
		cin >> c >> d;
		m1[c] = d;
	}

	for (int i = 0; i < b; i++) {
		string s;
		cin >> s;
		m[s]++;
	}
	
	auto it = m.end();
	it--;
	auto it2 = m.lower_bound((*it).second);
	cout << m1[(*it2).first] << "\n";
	cout << (*it2).first << "\n";
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

