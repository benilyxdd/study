#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(vector<int> vec, vector<string> &board) {
	bool ok = false;
	for (int i = 0; i < 3; i++) {
		
	}
}

void solve() {
	vector<string> board(3);
	for (string &st : board) {
		cin >> st;
	}

	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < 26; i++) {
		ans1 += check({i}, board);
	}

	for (int i = 0; i < 26; i++) {
		for (int j = i + 1; j < 26; j++) {
			ans2 += check({i, j}, board);
		}
	}

	cout << ans1 << '\n'
		 << ans2 << '\n';
}

int main() {
	// freopen("tttt.in", "r", stdin);
	// freopen("tttt.out", "w", stdout);
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

