#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, ar[4], cnt[4];

void solve() {
	memset(cnt, 0, sizeof(cnt));

	cin >> n;
	for (int i = 0; i < 4; i++)
		cin >> ar[i];
	
	int x = n-2;
	for (int i = 0; i < 4; i++) {
		if (ar[i] > x) {
			if (ar[i]-x == 1) {
			if (i == 0 || i == 2) {
					if (ar[1]-cnt[1] > ar[3]-cnt[3]) {
						cnt[1]++;
					} else {
						cnt[3]++;
					}
				} else if (i == 1 || i == 3) {
					if (ar[0]-cnt[0] > ar[2]-cnt[2]) {
						cnt[0]++;
					} else {
						cnt[2]++;
					}
				}
			} else if (ar[i]-x == 2) {
				if (i == 0 || i == 2) {
					cnt[1]++, cnt[3]++;
				} else if (i == 1 || i == 3) {
					cnt[0]++, cnt[2]++;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		if (cnt[i] > ar[i]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

