#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	double sum = 0;
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	double ans = 0;
	double ave = sum/n;
	if (ave >= (double)(k-0.5)) {
		cout << ans << "\n";
		return;
	}
	while(true) {
		sum += k;
		ans++;
		ave = sum/(n+ans);
		if (ave >= (double)(k-0.5)) {
			break;
		}
	}
	cout << ans << "\n";

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


