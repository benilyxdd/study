#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool cmp(pair<int, int>& a, pair<int, int>& b){
	return a.second < b.second;
}

void solve() {
	int a, b;
	cin >> a >> b;
	map<int, int> m;
	set<int> s;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		m[c]++;
		s.insert(c);
	}
	if (s.size() <= b) {
		cout << 0 << "\n";
	} else {
		int cnt = 0;
		int left = s.size() - b;
		vector<pair<int, int>> v;
		for (auto& it : m) {
			v.push_back(it);
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < left; i++) {
			cnt += v[i].second;
		}
		cout << cnt << "\n";
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

