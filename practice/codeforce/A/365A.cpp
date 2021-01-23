#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool ok[10];

void solve() {
	int cnt = 0, n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		bool realok = 1;
		memset(ok, false, sizeof(ok));
		while(a > 0) {
			int temp = a%10;
			ok[temp] = 1;
			a /= 10;
		}
		for (int i = 0; i <= k; i++) {
			if(!ok[i]) {
				realok = 0;
				break;
			}
		}
		cnt += realok;
	}
	cout << cnt;
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


