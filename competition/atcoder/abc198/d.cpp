#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b, c;
	cin >> a >> b >> c;

	int a_len = a.length();
	int b_len = b.length();

	set<char> s;
	for (char& ch : a) {
		s.insert(ch);
	}
	for (char& ch : b) {
		s.insert(ch);
	}

	if (s.size() > 10) {
		cout << "UNSOLVABLE";
		return;
	}

	int all = pow(10, s.size()+1);

	for (int i = 1; i < all; i++) {
		string temp = to_string(i);
		cout << temp << '\n';
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

