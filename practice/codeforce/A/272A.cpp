#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)101;
int ar[mxN], n, sum;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum += ar[i];
	}
	int cnt = 0;
	for (int i = 1; i <= 5; i++) {
		int	y = sum+i;
		if (y%(n+1) != 1) {
			cnt++;
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


