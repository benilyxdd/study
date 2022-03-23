#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool cmp(pair<string, int>& a, pair<string, int>& b) {
	return a.second < b.second;
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<string, int> m;
	for (int i = 0; i < n-1; i++) {
		string temp = s.substr(i, 2);
		m[temp]++;
	}
	vector<pair<string, int>> v;
	for (auto& it : m) {
		v.push_back(it);
	}

	sort(v.rbegin(), v.rend(), cmp);
	cout << v[0].first << "\n";
	
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

