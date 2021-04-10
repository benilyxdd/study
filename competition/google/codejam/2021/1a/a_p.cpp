#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int findNext(int& a, int b) {
	if (a > b) {
		return 0;
	}

	string a_str = to_string(a);
	string b_str = to_string(b);

	int a_len = a_str.length();
	int b_len = b_str.length();

	if (a_len == b_len) {
		a_str += '0';
		a = stoll(a_str);
		return 1;
	}

	int diff = b_len - a_len;
	int a_2 = a * pow(10, diff);
	if (a_2 > b) {
		a = a_2;
		return diff;
	}

	string a_str_2 = a_str;
	for (int i = 0; i < diff; i++) {
		a_str_2 += '9';
	}
	int temp = stoll(a_str_2);
	if (temp <= b) {
		a_str_2 = a_str;
		for (int i = 0; i <= diff; i++) {
			a_str_2 += '0';
		}
		a = stoll(a_str_2);
		return diff + 1;
	}

	a = b + 1;
	return diff;
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
		ans += findNext(ar[i], ar[i - 1]);
	}
	cout << ans << '\n';

	/*
	cout << "Array: \n";
	for (int& x : ar) {
		cout << x << ' ';
	}
	cout << '\n';
	*/
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

