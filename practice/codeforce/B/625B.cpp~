#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	
	string c = b;
	c += '&';
	c += a;
	int len = c.length();
	
	int ans = 0, ar[len+1];
	int l, r, k;
	l = r = 0;
	for (int i = 1; i < len; i++) {
		if (i > r) {
			l = r = i;
			while (r < len && c[r-l] == c[r]) {
				r++;
			}
			ar[i] = r-l;
			r--;
		} else {
			k = i-l;
			if (ar[k] < r-i+1) {
				ar[i] = ar[k];
			} else {
				l = i;
				while (r < len && c[r-l] == c[r]) {
					r++;
				}
				ar[i] = r-l;
				r--;
			}
		}
	}

	for (int i = 0; i < len; i++) {
		if (ar[i] == (int)b.length()) {
			ans++;
			i += ar[i]-1;
		}
	}
	cout << ans;
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

