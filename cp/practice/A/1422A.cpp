#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int ar[3];
	for (int i = 0; i < 3; i++)
		cin >> ar[i];
	sort(ar, ar+3);
	cout << ar[2]+ar[0]-ar[1] << "\n";
}

signed main() {
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


