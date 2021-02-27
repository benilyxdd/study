#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e6+3;
map<char, string> m;

int power(int a, int b) {
	int re = 1;
	for (int i = 0; i < b; i++) {
		re *= a;
		re %= MOD;
	}
	return re;
}

void setmap() {
	m['>'] = "1000";
	m['<'] = "1001";
	m['+'] = "1010";
	m['-'] = "1011";
	m['.'] = "1100";
	m[','] = "1101";
	m['['] = "1110";
	m[']'] = "1111";
}

void solve() {
	setmap();
	string a, b;
	cin >> a;
	int ans = 0;
	for (char& x : a) {
		b += m[x];
	}
	reverse(b.begin(), b.end());
	for (int i = 0; i < b.length(); i++) {
		ans += power(2, i)*(b[i]-'0');
		ans %= MOD;
	}

	cout << ans;

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

