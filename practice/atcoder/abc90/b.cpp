#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(int i) {
	string i_str = to_string(i);
	int len = i_str.length();
	for (int i = 0; i < len / 2; i++) {
		if (i_str[i] != i_str[len - i - 1]) {
			return false;
		}
	}
	return true;
}

int f(int a, int b) {
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		cnt += ok(i);
	}
	return cnt;
}

void solve() {
	int a, b;
	cin >> a >> b;
	cout << f(a, b);
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

