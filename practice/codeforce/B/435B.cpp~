#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a;
	int b;
	cin >> a >> b;
	while(b > 0) {
		int j = 0, i, mx = 0, pos = 0;
		for (i = j; i < a.length(); i++) {
			if (i-j <= b) {
				if (a[i]-'0' > mx) {
					mx = max(mx, a[i]-'0');
					pos = i;
				}
			}
		}
		b -= pos-j;
		for (int k = pos; k > 0; k--) {
			swap(a[k], a[k-1]);
		}
		cout << a << "\n";
		j++;
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

