#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int mx = 0, mx2 = 0, a = 0, b = 0, c = 0;
	for (int i = 0; i < n; i++) {
		mx += ar[i];
		if (mx >= mx2) {
			mx2 = mx;
			a = c;
			b = i;
		}
		if (mx < 0) {
			mx = 0;
			c++;
		}
	}
	cout << b-a+1;
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

