#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<string> v;
	int no = 0;
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin >> ws, s);
		set<char> x;
		for (int j = 0; j < s.length(); j++) {
			if (isalpha(s[j])) {
				x.insert(s[j]);
			}
		}
		if (x.size() > no) {
			v.clear();
			v.push_back(s);
			no = x.size();
		} else if (x.size() == no) {
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end());
	cout << v[0] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
