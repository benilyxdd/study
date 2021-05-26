#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int k, a, b;
	string s;
	cin >> k >> a >> b >> s;
	int n = s.length();
	
	int per = n/k;
	if (n > k * b || n < k * a) {
		cout << "No solution";
		return;
	}

	for (int i = 0, j = 1; i < n; i++) {
		if (i != 0 && i % per == 0 && j < k) {
			j++;
			cout << '\n';
		}
		cout << s[i];
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


