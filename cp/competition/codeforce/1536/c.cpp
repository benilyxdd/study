#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	// cal prefix
	vector<array<int, 2>> prefix(n, array<int, 2>());
	prefix[0][0] = (s[0] == 'D');
	prefix[0][1] = (s[0] == 'K');

	for (int i = 1; i < n; i++) {
		prefix[i][0] = prefix[i - 1][0] + (s[i] == 'D');
		prefix[i][1] = prefix[i - 1][1] + (s[i] == 'K');
	}

	for (int i = 0; i < n; i++) {
		
	}
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

