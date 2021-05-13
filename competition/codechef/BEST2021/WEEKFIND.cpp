#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<string, int> day;

void con() {
	day["monday"] = 0;
	day["tuesday"] = 1;
	day["wednesday"] = 2;
	day["thursday"] = 3;
	day["friday"] = 4;
	day["saturday"] = 5;
	day["sunday"] = 6;
}

void solve() {
	con();
	string s;
	int n;
	cin >> s >> n;
	int x = day[s];
	x = (x + n) % 7;
	for (pair<const string, int> &p : day) {
		if (p.second == x) {
			cout << p.first << '\n';
			return;
		}
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

