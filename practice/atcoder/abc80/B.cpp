#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int sum = 0;
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	cout << (n%sum == 0 ? "Yes" : "No") << "\n";
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

