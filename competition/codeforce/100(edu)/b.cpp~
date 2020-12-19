#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		int res = 1;
		while(res*2 <= ar[i])
			res*=2;
		cout << res << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

