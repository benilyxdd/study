#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e7+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (ar[i]%6 == 0) {
			ar[i] = 6;
		} else {
			ar[i] = ar[i]%6;
		}
		sum += ar[i];
	}
	cout << sum << "\n";
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

