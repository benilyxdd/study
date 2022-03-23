#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1005;
int n, ar[mxN];

void solve() {
	ar[0] = 1001;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> ar[i];
	ar[n+1] = 1001;
	int mx = 0;
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		int x = i, y = i;
		while(ar[x] >= ar[x-1]) {
			temp++, x--;
		}	
		while(ar[y] >= ar[y+1]) {
			temp++, y++;
		}
		mx = max(mx, temp);
	}
	cout << mx+1;
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

