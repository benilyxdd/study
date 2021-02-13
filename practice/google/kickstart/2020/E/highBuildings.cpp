#include <bits/stdc++.h>
using namespace std;

const int mxN = 101;
int ar[mxN];

void solve() {
	memset(ar, 0, sizeof(ar));
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	
	if (a+b-c > n) {
		cout << "IMPOSSIBLE\n";
		return;
	}

		


	for (int i = 1; i <= n; i++) 
		cout << ar[i] << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
