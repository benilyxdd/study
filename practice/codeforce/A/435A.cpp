#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, cnt = 1, temp = 0, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (temp+a > m) {
			temp = a;
			cnt++;
		} else {
			temp += a;
		}
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


