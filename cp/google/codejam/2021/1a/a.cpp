#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int findnext(int& a, int b) {
	int res = 0;
	if (a > b) {
		return res;
	}

	string a_str = to_string(a);
	string b_str = to_string(b);

	int a_len = a_str.length(); //2
	int b_len = b_str.length(); //1
	// cout << a_str << ' ' << b_str << '\n';

	bool ok = 1;
	for (int i = 0; i < a_len; i++) {
		if (a_str[i] != b_str[i]) {
			ok = 0;
			break;
		}
	}

	if (a_len == b_len) {
		a *= 10;
		return 1;
	}

	// cout << b_len << ' ' << a_len << '\n';
	bool ok2 = false;
	for (int i = b_len-1; i >= a_len; i--) {
		// cout << b_str[i] << ' ';
		if (b_str[i] != '9') {
			ok2 = true;
			break;
		}
	}
	// cout << ok2 << '\n';

	if (ok && ok2) {
		a = b + 1;
		res = b_len - a_len;
	} else {
		int t = b_len - a_len;
		a *= pow(10, t);
		if (a <= b) {
			a *= 10;
			t++;
		}
		res = t;
	}

	// cout << "res: " << res << '\n';
	return res;
}

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int ans = 0;
	for (int i = 1; i < n; i++) {
		int x = findnext(ar[i], ar[i - 1]);
		ans += x;
	}
	cout << ans << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

