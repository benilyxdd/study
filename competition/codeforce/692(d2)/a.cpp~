#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int a = 0, b = 0;
	reverse(s.begin(), s.end());
	for (int i = 0; i < n; i++) {
		if (s[i] == ')' && i == 0) {
			while(s[i] == ')') {
				i++;
			}
			a = i+1;
			b = n-i+1;
			break;
		}
	}
	cout << (b >= a ? "No\n" : "Yes\n");
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

