#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	bool f = false;
	int wh = 0;
	for (int i = 0; i < n-1; i++) {
		if (ar[i]-ar[i+1] > 0) {
			wh = i;
			f = true;
			break;
		} else {
			ar[i+1] -= ar[i];
			ar[i] = 0;
		}
	}
	
	bool ok = false;
	if (f) {
		for (int i = wh; i < n; i++) {
			swap(ar[i], ar[i+1]);
		
		}
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

