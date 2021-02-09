#include <bits/stdc++.h>
using namespace std;

#define ll long long
string s = "ROYGBIV";

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < 7; i++) {
		cout << s[i];
	}
	for (int i = 0; i < n-7; i++) {
		cout << s[i%4+3];
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

