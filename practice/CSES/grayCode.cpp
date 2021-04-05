#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<string> ans;
	ans.push_back("0");
	ans.push_back("1");
	for (int i = 0; i < n-1; i++) {
		int len = ans.size();
		for (int j = len - 1; j >= 0; j--) {
			ans.push_back(ans[j]);
		}

		len = ans.size();
		for (int j = 0; j < len / 2; j++) {
			ans[j].insert(0, "0");
		}
		for (int j = len / 2; j < len; j++) {
			ans[j].insert(0, "1");
		}
	}

	for (string& x : ans) {
		cout << x << '\n';
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

