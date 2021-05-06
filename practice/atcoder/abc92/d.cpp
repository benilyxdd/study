#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << 100 << ' ' << 100 << '\n';
	vector<vector<char>> table(100, vector<char>(100));
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 100; j++) {
			table[i][j] = '.';
		}
	}
	for (int i = 50; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			table[i][j] = '#';
		}
	}

	a--, b--;
	for (int i = 0; i < 50 && a > 0; i += 2) {
		for (int j = 0; j < 100 && a > 0; j += 2, a--) {
			table[i][j] = '#';
		}
	}
	for (int i = 51; i < 100 && b > 0; i += 2) {
		for (int j = 0; j < 100 && b > 0; j += 2, b--) {
			table[i][j] = '.';
		}
	}
	for (vector<char>& x : table) {
		for (char& y : x) {
			cout << y;
		}
		cout << '\n';
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

