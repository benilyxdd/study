#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
string ar[mxN];
char ta[mxN][mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	for (int i = 0; i < mxN; i++) {
		for (int j = 0; j < mxN; j++) {
			ta[i][j] = 'a';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ta[i+1][j+1] = ar[i][j];
		}
	}
	
	bool ok = 1;
	for (int i = 0; i < n+2; i++) {
		for (int j = 0; j < n+2; j++) {
			if (ta[i][j] == 'x' || ta[i][j] == 'o') {
				int cnt = 0;
				cnt += ta[i-1][j] == 'o';
				cnt += ta[i][j-1] == 'o';
				cnt += ta[i][j+1] == 'o';
				cnt += ta[i+1][j] == 'o';
				if (cnt&1)
					ok = 0;
			}
		}
	}
	cout << (ok ? "YES" : "NO");
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


