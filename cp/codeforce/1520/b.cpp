#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> v;

void add() {
	vector<string> v_str;
	for (int i = 1; i <= 9; i++){
		v_str.push_back(to_string(i));
	}
	for (int i = 0; i < 9; i++) {
		for (string& st : v_str) {
			v.push_back(stoi(st));
			st += st[0];
		}
	}
}

void solve() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int& in : v) {
		if (in <= n) {
			cnt++;
		}
	}
	cout << cnt << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	add();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

