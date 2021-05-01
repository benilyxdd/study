#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	int a_len = a.length();
	int b_len = b.length();
	// a -> b;
	string b_res;
	for (char& ch : b) {
		b_res += (char)(((ch - '0') ^ 1) + '0');
	}
	
	if (a == b) {
		cout << 0 << '\n';
		return;
	}
	if (a == b_res) {
		cout << 1 << '\n';
		return;
	}
	if (b == "0") {
		int cnt = 0;
		for (int i = 1; i < a_len; i++) {
			if (a[i] != a[i - 1]) {
				cnt++;
			}
		}
		cout << cnt + 1 << '\n';
		return;
	}
	//
	int best_start = a_len - 1;
	bool res = -1;
	for (int i = 1; i < a_len; i++) {
		if (a[i] != a[i - 1]) {
			// cout << "I: " << i << '\n';
			bool ok = false;
			int j = i, k = 0;
			while (a[j] == b[k] && k < b_len) {
				j++, k++;
			}
			
			if (j == a_len) {
				if (best_start > i) {
					best_start = i;
					res = false;
					ok = true;
				}
			}

			j = i, k = 0;
			while (a[j] == b_res[k] && k < b_len) {
				j++, k++;
			}
			if (j == a_len) {
				if (best_start > i) {
					best_start = i;
					res = true;
					ok = true;
				}
			}
			if (ok) {
				break;
			}
		}
	}
	// cout << best_start << ' ' << res << '\n';

	//how many i can move
	int cnt = 0;
	for (int i = 1; i <= best_start; i++) {
		if (a[i] != a[i - 1]) {
			cnt++;
		}
	}
	// cout << "move while adding '0': " << cnt << ' ';
	int get_len = a_len - best_start;
	int rev_need = res;
	for (int i = get_len; i < b_len; i++) {
		if (b[i] != b[i - 1]) {
			rev_need++;
		}
	}
	// cout << rev_need << '\n';
	if (rev_need > cnt) {
		cout << "IMPOSSIBLE\n";
		return;
	}

	cout << (b_len - get_len) + cnt << '\n';
}

int main() {
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

