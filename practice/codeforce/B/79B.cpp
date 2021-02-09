#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 4e4+4;
int n, m, k, t, cnt[mxN], pre[mxN];
set<int> ar[mxN];

void solve() {
	cin >> n >> m >> k >> t;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		ar[a].insert(b);
		cnt[a]++;
	}

	pre[1] = m-cnt[1];
	for (int i = 2; i < mxN; i++) {
		pre[i] = pre[i-1]+(m-cnt[i]);
	}
	
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		bool ok = 0;
		for (const int& x : ar[a]) {
			if (x == b) {
				ok = 1;
				break;
			}
		}
		
		int x = pre[a-1];
		int p = 0;
		for (const int& x : ar[a]) {
			if (x > b) {
				break;
			}
			p++;
		}
		x += b-p;
		x %= 3;
		if (ok) {
			cout << "Waste\n";
		} else {
			if (x == 0) {
				cout << "Grapes\n";
			} else if (x == 1) {
				cout << "Carrots\n";
			} else {
				cout << "Kiwis\n";
			}
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

