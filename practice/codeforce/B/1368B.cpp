#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int k;
	cin >> k;
	string s = "codeforces";
	for (int i = 0; i < k-1; i++)
		s += 's';
	cout << s;
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

