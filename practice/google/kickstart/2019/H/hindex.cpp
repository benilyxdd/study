#include <bits/stdc++.h>
using namespace std;

const int mxN = (int)1e5+5;
int ar[mxN], cnt[mxN], n;

void solve() {
	memset(cnt, 0, sizeof(cnt));
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	

	for (int i = 0; i < n; i++) {
		
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
