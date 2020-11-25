#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e6+6;
int a[MAX];

void solve() {
	int n;
	cin >> n;
	if (a[n] != 0) {
		cout << a[n] << "\n";
	} else {
		int cnt = 0;
		int x = sqrt(n);
		if (x*x == n) {
			cnt--;
		}
		for (int i = 1; i*i <= n; i++) {
			if (n%i == 0) {
				cnt += 2;
			}
		}
		a[n] = cnt;
		cout << cnt << "\n";
	}
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

