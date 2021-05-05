#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	int longest = 0, start = -1;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			int j = i;
			while (s[j + 1] == '*' && j < n - 1) {
				j++;
			}
			int diff = j - i + 1;
			if (diff > longest) {
				
			}
		}
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

