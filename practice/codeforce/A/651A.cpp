#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	while(a > 1 || b > 1) {
		if (a < b) {
			swap(a, b);
		}
		int x = a/2;
		if (a == 2) {
			cnt++;
			break;
		}
		if (a&1) {
			a = 1;
			cnt += x;
			b += x;
		} else {
			a = 2;
			cnt += x-1;
			b += x-1;
		}
	}
	cout << cnt;
}

int main() {
	ios::sync_with_stdio(1);
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


