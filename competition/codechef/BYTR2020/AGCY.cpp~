#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
array<int, 2> d[mxN];
int ar[mxN], n, q;

void solve() {
	memset(ar, 0, sizeof(ar));
	cin >> n >> q;
	for (int i = 0; i < q; i++) 
		cin >> d[i][0] >> d[i][1];

	for (int i = 0; i < q; i++) {
		for (int j = d[i][0], k = 1; j <= d[i][1]; j++, k++) {
			ar[j-1] += k;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
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

