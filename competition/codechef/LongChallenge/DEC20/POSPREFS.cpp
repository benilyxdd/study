#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, k;
int pre[1001], ans[1001];
int pos, neg;

void solve() {
	memset(pre, 0, sizeof(pre));
	memset(ans, 0, sizeof(ans));
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		ans[i] = (i&1 ? i : -i);
	
	int p = (n&1 ? n/2+1 : n/2);
	int times = abs(p-k);
	if (k > p) {
		for (int i = n; i >= 1; i--) {
			if (ans[i] < 0) {
				if (times > 0) {
					ans[i] = abs(ans[i]);
					times--;
				} else {
					break;
				}
			}
		}
	} else if (k < p) {
		for (int i = n; i >= 1; i--) {
			if (ans[i] > 0) {
				if (times > 0) {
					ans[i] = -ans[i];
					times--;
				} else {
					break;
				}
			}
		}
	}
	/*
	//test
	pre[1] = ans[1];
	if (ans[1] > 0) {
		pos++;
	} else {
		neg++;
	}
	for (int i = 2; i <= n; i++) {
		pre[i] = ans[i]+pre[i-1];
		if (pre[i] > 0) {
			pos++;
		} else {
			neg++;
		}
	}
	cout << "POS " << pos << "\n";
	cout << "NEG " << neg << "\n";
	//test end
	*/
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << " ";
	}
	cout << "\n";
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

