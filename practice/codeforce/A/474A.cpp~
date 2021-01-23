#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string o = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string l = "wertyuiop sdfghjkl; xcvbnm,./ ";
	string r = " qwertyuio asdfghjkl zxcvbnm,.";
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < b.length(); i++) {
		for (int j = 0; j < o.length(); j++) {
			if (b[i] == o[j]) {
				if (a == "R") {
					cout << r[j];
				} else {
					cout << l[j];
				}
				break;
			}
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


