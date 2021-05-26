#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	
	int cnt = 0;
	bool ok[n];
	memset(ok, false, sizeof(ok));
	for (int i = 1; i < n-1; i++) {
		if (ar[i] > ar[i+1] && ar[i] > ar[i-1] || ar[i] < ar[i-1] && ar[i] < ar[i+1]) {
			ok[i] = 1;
			cnt++;
		}
	}
	
	ok[0] = 1;
	ok[n-1] = 1;
	int mx = 0, temp = 0;
	for (int i = 0; i < n-2; i++) {
		if (ok[i] == 1 && ok[i+1] == 1) {
			temp = 1;
			mx = max(mx, temp);
			if (ok[i+2] == 1) {
				temp = 2;
				mx = max(mx, temp);
				if (ok[i+3] == 1) {
					temp = 3;
					mx = 3;
					break;
				}
			}
		}
	}
	
	cnt -= mx;
	cout << max(0, cnt) << "\n";

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

