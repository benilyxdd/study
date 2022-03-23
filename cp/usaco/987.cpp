#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> ar(n);
	for (string &st : ar) {
		cin >> st;
	}

	int cnt = 0;
	vector<vector<string>> ans;
	vector<string> temp;
	for (string &st : ar) {
		int len = st.length();
		if (cnt + len <= m) {
			cnt += len;
			temp.push_back(st);
		} else {
			ans.push_back(temp);
			temp.clear();
			temp.push_back(st);
			cnt = len;
		}
	}
	if (!temp.empty()) {
		ans.push_back(temp);
	}

	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			if (j != ans[i].size() - 1) {
				cout << ans[i][j] << ' ';
			} else {
				cout << ans[i][j] << '\n';
			}
		}
	}
}

int main() {
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
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

