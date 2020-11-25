#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int c = 0;
	if (s[0]=='1') c++;
	if (s[1]=='1') c++;
	if (s[2]=='1') c++;
	cout << c << "\n";
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

