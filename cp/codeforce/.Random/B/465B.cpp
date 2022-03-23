#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 10001;
int n, cnt, ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		if (ar[i] == 1) {
			cnt += 2;
			i++;
			while(ar[i] == 1) {
				cnt++;
				i++;
			}
		}
	}
	cout << (cnt != 0 ? cnt-1 : 0);
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

