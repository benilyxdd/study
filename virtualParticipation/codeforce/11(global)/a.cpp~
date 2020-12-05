#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int ar[mxN], n, sum;
int pre[mxN];
bool tf[mxN];
int ans[mxN];

void solve() {
	memset(pre, 0, sizeof(pre));
	memset(tf, false, sizeof(tf));
	memset(ans, 0, sizeof(ans));
	sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum += ar[i];
	}
	if (sum == 0) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		pre[0] = ar[0];
		ans[0] = ar[0];
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < n; j++) {
				if (!tf[j] && pre[i-1]+ar[j] != 0) {
					tf[j] = 1;
					pre[i] = pre[i-1]+ar[j];
					ans[i] = ar[j];
					break;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
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

