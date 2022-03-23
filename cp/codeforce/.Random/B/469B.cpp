#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 10001;
int p, q, l, r, ans;
array<int, 2> ar[mxN], ar2[mxN];

bool chat(int st, int et, int st2, int et2) {
	if (et >= st2 && st <= et2)
		return true;
	return false;
}

void solve() {
	cin >> p >> q >> l >> r;
	for (int i = 0; i < p; i++)
		cin >> ar[i][0] >> ar[i][1];
	
	for (int i = 0; i < q; i++) {
		cin >> ar2[i][0] >> ar2[i][1];

		for (int j = 0; j < p; j++) {
			
			for (int k = l; k < ar2[j][0]; k++) {
				cout << k << ' ' << k+ar2[j][0] << '\n';
			}
				
		}
	}
	cout << ans;
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

