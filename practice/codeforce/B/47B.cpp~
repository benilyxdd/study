#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<char, int> m;

bool cmp(pair<char, int>& a, pair<char, int>& b) {
	return a.second < b.second;
}

void sort(map<char, int>& m) {
	vector<pair<char, int>> a;
	for (auto& it : m) {
		a.push_back(it);
	}
	sort(a.begin(), a.end(), cmp);

	for (auto& it : a) {
		cout << it.first;
	}
}

void solve() {
	string s;
	bool ok = 1;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		if (s[1] == '<') {
			m[s[0]]--;
			m[s[2]]++;
			if (m[s[0]] >= m[s[2]]) {
				ok = 0;
			}
		} else {
			m[s[0]]++;
			m[s[2]]--;
			if (m[s[0]] <= m[s[2]]) {
				ok = 0;
			}
		}
	}
	if (!ok) {
		cout << "Impossible";
	} else {
		sort(m);
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

