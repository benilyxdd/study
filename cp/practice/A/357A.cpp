#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], m, x, y;
int pre[mxN], suf[mxN];

void f() {
	pre[0] = ar[0];
	for (int i = 1; i < m; i++) {
		pre[i] = pre[i-1]+ar[i];
	}
	
	suf[m-1] = ar[m-1];
	for (int i = m-2; i >= 0; i--) {
		suf[i] = suf[i+1]+ar[i];
	}
}

void solve() {
	cin >> m;
	for (int i = 0; i < m; i++) 
		cin >> ar[i];
	cin >> x >> y;	
	f();
	

	for (int i = 0; i < m; i++) {
		if (pre[i] >= x && pre[i] <= y&& suf[i+1] <= y && suf[i+1] >= x) {

			if (i == m-1) {
				cout << 0;
				return;
			}
			cout << i+2;
			return;
		}
	}
	cout << 0;
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


