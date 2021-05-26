#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string s) {
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '5' && s[i] != '8') {
			return false;
		}
	}
	return true;
}

void change(string& s) {
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == '2') {
			s[i] = '5';
		} else if (s[i] == '5') {
			s[i] = '2';
		}
	}
	reverse(s.begin(), s.end());
}

bool ok(int h, int m, pair<int, int>& t) {
	string x, y;
	if (t.first < 10) {
		x += '0';
	}
	if (t.second < 10) {
		y += '0';
	}
	x += to_string(t.first);
	y += to_string(t.second);
	if (!check(x) || !check(y)) {
		return false;
	}
	change(x);
	change(y);

	//cout << x << ' ' << y << '\n';
	
	int x2 = stoi(x);
	int y2 = stoi(y);

	//cout << x2 << ' ' << y2 << '\n';
	if (x[0] == '0') {
		x2 *= 10;
	}
	if (y[0] == '0') {
		y2 *= 10;
	}
	//cout << x2 << ' ' << y2 << '\n';
	//cout << '\n';

	if (y2 >= h || x2 >= m) {
		return false;
	}
	return true;
}

void add(int h, int m, pair<int, int>& t) {
	t.second++;
	if (t.second == m) {
		t.second = 0;
		t.first++;
		if (t.first == h) {
			t.first = 0;
		}
	}
}

void solve() {
	int h, m;
	string s;
	cin >> h >> m >> s;

	pair<int, int> dt = {(s[0]-'0')*10+s[1]-'0', (s[3]-'0')*10+s[4]-'0'};
	//cout << (ok(h, m, dt) ? "OK" : "NO");
	while(!ok(h, m, dt)) {
		add(h, m, dt);
	}

	if (dt.first < 10) {
		cout << '0';
	}
	cout << dt.first << ':';
	if (dt.second < 10) {
		cout << '0';
	}
	cout << dt.second << '\n';
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(1);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

