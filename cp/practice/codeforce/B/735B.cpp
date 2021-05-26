#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int n, n1, n2, ar[mxN];

void solve() {
	cin >> n >> n1 >> n2;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar, ar+n, greater<int>());

	
	int i = 0;
	int f = 0, l = 0;
	if (n1 > n2) {
		swap(n1, n2);
	}
	for (int j = 0; j < n1; i++, j++) {
		f += ar[i];
	}
	for (int j = 0; j < n2; i++, j++) {
		l += ar[i];
	}

	double m1 = (double)f/n1;
	double m2 = (double)l/n2;

	cout << fixed << setprecision(10) << m1+m2;
}

signed main() {
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

