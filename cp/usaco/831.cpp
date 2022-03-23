#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(vector<int> vec, vector<string> board) {
	vector<string> copy = board;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < vec.size(); k++) {
				if (board[i][j] == char(vec[k] + 'A')) {
					board[i][j] = '!';
				}
			}
		}
	}

	auto check = [&vec](char a, char b, char c) {
		for (int i = 0; i < vec.size(); i++) {
			char xd = char(vec[i] + 'A');
			if (xd != a && xd != b && xd != c) {
				return false;
			}
		}
		return true;
	};

	for (int i = 0; i < 3; i++) {
		if (board[i][0] == '!' && board[i][1] == '!' && board[i][2] == '!') {
			if (check(copy[i][0], copy[i][1], copy[i][2])) {
				return true;
			}
		}
		if (board[0][i] == '!' && board[1][i] == '!' && board[2][i] == '!') {
			if (check(copy[0][i], copy[1][i], copy[2][i])) {
				return true;
			}
		}
	}
	if (board[0][0] == '!' && board[1][1] == '!' && board[2][2] == '!') {
		if (check(copy[0][0], copy[1][1], copy[2][2])) {
			return true;
		}
	}
	if (board[0][2] == '!' && board[1][1] == '!' && board[2][0] == '!') {
		if (check(copy[0][2], copy[1][1], copy[2][0])) {
			return true;
		}
	}
	return false;
}

void solve() {
	vector<string> board(3);
	for (string &st : board) {
		cin >> st;
	}

	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < 26; i++) {
		for (int j = i; j < 26; j++) {
			if (i == j) {
				ans1 += check({i}, board);
			} else {
				ans2 += check({i, j}, board);
			}
		}
	}

	cout << ans1 << '\n'
		 << ans2 << '\n';
}

int main() {
	freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);
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

