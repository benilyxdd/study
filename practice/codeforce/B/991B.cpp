#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	double sum = 0;
	cin >> n;
	double a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n);
	int ans = 0, i = 0;
	while(true) {
		double x = sum/n;
		if (x >= 4.5) {
			cout << ans << "\n";
			break;
		} else {
			sum += 5-a[i];
			i++, ans++;
		}
	}

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

