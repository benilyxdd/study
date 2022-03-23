#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<string> names = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};

void solve() {
	map<string, int> m;
	for (string &name : names) {
		m[name] = 0;
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		int cnt;
		cin >> name >> cnt;
		m[name] += cnt;
	}

	set<pair<int, string>> s;
	for (pair<const string, int> &p : m) {
		s.insert({p.second, p.first});
	}

	set<pair<int, string>>::iterator it = s.begin();
	while ((*it).first == (*s.begin()).first) {
		it++;
	}

	set<pair<int, string>>::iterator it_copy = it;
	it_copy++;

	if (it == s.end() || (*it).first == (*it_copy).first) {
		cout << "Tie\n";
	} else {
		cout << (*it).second << '\n';
	}
}

int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);
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

