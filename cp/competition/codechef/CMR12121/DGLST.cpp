#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	double n;
	cin >> n;
	double x = (double)pow((double)5, n);
	string s = to_string(x);
	bool y = false;
	for (int i = s.length()-1; i >= 0; i--) {
		if (!y && i = s.length()-1 && s[i] == "0") {
			while(s[i] == '0') {
				i--;
			}
			y = 1;
		} else {
			cout << s[i] << s[i-1];
			return;
		}
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

