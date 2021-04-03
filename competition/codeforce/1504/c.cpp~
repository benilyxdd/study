#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	if (s[0] != '1' || s[n-1] != '1') {
		cout << "NO\n";
		return;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			cnt++;
		}
	}

	if (cnt&1 || n&1) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	char a[n], b[n];
	for (int i = 0; i < n; i++) {
		a[i] = b[i] = '#';
	}
	a[0] = b[0] = '(';
	a[n-1] = b[n-1] = ')';


	for (int i = 1; i < n-1; i++) {
		if (s[i] == '1') {
			int temp = i;
			i++;
			while(s[i] != '1' && i < n-1) {
				i++;
			}
			a[temp] = b[temp] = '(';
			a[i] = b[i] = ')';
		}
	}
	
	for (int i = i, j = 0; i < n-1, j < cnt; i++) {
		if (a[i] == '#') {
			if (j&1) {
				a[i] = '(';
				b[i] = ')';
			} else {
				a[i] = ')';
				b[i] = '(';
			}
			j++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << b[i];
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

