#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b, c, d;
	cin >> a >> b;
	int br;
	for (int i = 0; i < a.length(); i++) {
		while(a[i] != '|') {
			c += a[i];
			i++;
		}
		br = i;
		break;
	}
	d = a.substr(++br);

	int ble = b.length();
	int cle = c.length();
	int dle = d.length();
	int p = abs(cle-dle);
	if (ble < p || (ble-p)%2 != 0) {
		cout << "Impossible";
	} else {
		if (cle < dle) {
			c += b.substr(0, p);
		} else {
			d += b.substr(0, p);
		}
		b = b.substr(p);
		c += b.substr(0, b.length()/2);
		d += b.substr(b.length()/2);
		cout << c << "|" << d;
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


