#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool islast(ll n) {
	for (int i = 1; i <= 18; i++) {
		ll cant = pow(10, i) - 1;
		if (n == cant) {
			return true;
		}
	}
	return false;
}

bool ok(ll n) {
	string n_str = to_string(n);
	ll len = n_str.length();
	ll half = n_str.length() / 2;
	// cout << n << ' ';

	for (ll i = 1; i <= half; i++) {
		ll now = i, j = i, last = stoll(n_str.substr(0, i));
		bool go2 = true;
		if (islast(last)) {
			now++;
		}
		// cout << "I: " << i << '\n';

		for (int k = j; k < n_str.length(); k += now) {
			string s = n_str.substr(k, now);
			ll s_num = stoll(s);
			// cout << s_num << ' ';
			if (s_num != last + 1 || s.length() != now) {
				go2 = false;
				break;
			}
			last = s_num;
			if (islast(s_num)) {
				now++;
				k--;
			}
		}
		if (go2) {
			return true;
		}
		// cout << '\n';
	}
	return false;
}

ll findNext(ll n) {
	bool go = ok(n);
	while (!go) {
		n++;
		go = ok(n);
	}
	return n;
}

void solve() {
	ll n;
	cin >> n;
	cout << findNext(n + 1) << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input_b.txt", "r", stdin);
	// freopen("output_b.txt", "w", stdout);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

