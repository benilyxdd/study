#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
double ar[mxN];
int x, y;
double a, b;

void solve() {
	while(cin >> x) {
		memset(ar, 0, sizeof(ar));
		cin >> a >> b >> y;

		if (x < 0) 
			break;
		for (int i = 0; i < y; i++) {
			int aa;
			double bb;
			cin >> aa >> bb;
			ar[aa] = bb;
		}

		for (int i = 1; i < 101; i++) {
			if (ar[i] == 0) {
				ar[i] = ar[i-1];
			}
		}

		int cnt = 1;
		double c = (a+b)*(1-ar[0]);
		while(b > c) {
			cout << "c: " << c << "\n";
			cout << "b: " << b << "\n";
			cout << "ac: " << ar[cnt] << "\n";
			b -= a;
			c = c*(1-ar[cnt]);
			cnt++;
		}
		cout << cnt-1 << "\n";
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


