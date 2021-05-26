#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], n;

void solve() {
	cin >> n;
	int la = -1, f = -1;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (f == -1 && ar[i] == 1) {
			f = i;
		}
		if (ar[i] == 1) {
			la = i;
		}
	}
	if (la == -1 && f == -1) {
		cout << 0;
		return;
	}

	int cnt = 0;
	//cout << "f: " << f << "\nl: " << la << "\n";
	for (int i = f; i <= la; i++) {
		cnt++;
		//cout << "i: " << i << " ";
		//cout << "cnt: " << cnt << "\n";
		if (ar[i+1] == 0 && ar[i+2] == 0) {
			while(ar[i+1] == 0) {
				i++;
			}
		}
	}
	cout << cnt;
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


